// Hackerrank

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        scan.close();
        // Write your code here.
        String[] list = s.trim().split("[ !,?\\._'@]+",0);
        if (list.length==1 && list[0].equals("")){
			System.out.println(0);
        } else {
            System.out.println(list.length);
            for(int i = 0; i < list.length; i++){
                System.out.println(list[i]);
            }
        }
    }
}
