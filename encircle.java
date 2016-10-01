// hackerrank

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
 static String[] doesCircleExist(String[] commands) {
        String[] arr = new String[commands.length];
        for (int i = 0; i < commands.length; i++){
            boolean flag = helper(commands[i]);
            if (flag){
                arr[i] = "YES";
            } else {
                arr[i] = "NO";
            }
        }
        return arr;
    }

    static boolean helper(String command){
        if (command == "L" || command == "R"){
            return true;
        } else if (command == "G"){
            return false;
        }
        boolean flag = false;
        String direction = "N";
        int x = 0;
        int y = 0;
        int currX = 0;
        int currY = 0;
        for(int i = 0; i < command.length(); i++){
            char ch = command.charAt(i); 
            if (direction.compareTo("N") == 0){
                if (ch == 'G'){
                    currY++;
                } else if (ch == ('L')){
                    direction = "W";
                } else if (ch == 'R'){
                    direction = "E";
                }
            } else if (direction.compareTo("S") == 0){
                if (ch == 'G'){
                    currY--;
                } else if (ch == 'L'){
                    direction = "E";
                } else if (ch == 'R'){
                    direction = "W";
                } 
            } else if (direction.compareTo("E") == 0){
                if (ch == 'G'){
                    currX++;
                } else if (ch == 'L'){
                    direction = "N";
                } else if (ch == 'R'){
                    direction = "S";
                } 
            } else if (direction.compareTo("W") == 0){
                if (ch == 'G'){
                    currX--;
                } else if (ch == 'L'){
                    direction = "S";
                } else if (ch == 'R'){
                    direction = "N";
                } 
            }
        }
       
        if (direction.equals("N") && ((currX- x)*(currX - x) + (currY -y)*(currY-y)) > 0 ) {
            flag = false;
        } else {
            flag = true;
        }
        return flag;
    }
    public static void main(String[] args) throws IOException{
        Scanner in = new Scanner(System.in);
        final String fileName = System.getenv("OUTPUT_PATH");
        BufferedWriter bw = new BufferedWriter(new FileWriter(fileName));
        String[] res;
        
        int _commands_size = 0;
        _commands_size = Integer.parseInt(in.nextLine().trim());
        String[] _commands = new String[_commands_size];
        String _commands_item;
        for(int _commands_i = 0; _commands_i < _commands_size; _commands_i++) {
            try {
                _commands_item = in.nextLine();
            } catch (Exception e) {
                _commands_item = null;
            }
            _commands[_commands_i] = _commands_item;
        }
        
        res = doesCircleExist(_commands);
        for(int res_i=0; res_i < res.length; res_i++) {
            bw.write(String.valueOf(res[res_i]));
            bw.newLine();
        }
        
        bw.close();
    }
}
