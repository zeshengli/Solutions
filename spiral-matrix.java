// hackerrank
// write a function to print out a matrix in spiral order
import java.io.*;
import java.util.*;
public class Solution {
    public static ArrayList<ArrayList<String>> list = new ArrayList<ArrayList<String>>();
    public static int column;
    public static int row;
    public static boolean flag = false;
    
    public static void printRowLeftToRight(){
        ArrayList<String> tmp = list.remove(0);
        if(flag && !tmp.isEmpty()){
            System.out.print(",");
        }
        while(!tmp.isEmpty()){
            System.out.print(tmp.remove(0));
            if (!tmp.isEmpty()){
                System.out.print(",");
            }
        }
    }
   
    public static void printColumnUpToDown(){
        ArrayList<String> tmp = new ArrayList<String>();
       for(int i = 0; i < list.size(); i++){
           ArrayList<String> t = list.get(i);
           tmp.add(t.remove(t.size() -1));
       }
        while(!tmp.isEmpty()){
            System.out.print("," + tmp.remove(0));
        }         
    }
    
    public static void printRowRightToLeft(){
        ArrayList<String> tmp = list.remove(list.size() -1);
        int s = tmp.size() -1;
        for (int i = s; i >= 0; i--){
            System.out.print(","+ tmp.remove(i));
        }
    }
    
    public static void printColumnDownToUp(){
        ArrayList<String> tmp = new ArrayList<String>();
       for(int i = list.size() -1 ; i >= 0; i--){
           ArrayList<String> t = list.get(i);
           tmp.add(t.remove(0));
       }
        while(!tmp.isEmpty()){
            System.out.print("," + tmp.remove(0));
        }
        flag = true;
    }
    
  public static void main(String args[] ) throws Exception {
      /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      Scanner scan = new Scanner(System.in);
      String tmpS = scan.nextLine().replaceAll("\\n","").trim();
      String[] tmp = tmpS.split(",");
      row = Integer.parseInt(tmp[0]);
      column = Integer.parseInt(tmp[1]);

      while(scan.hasNextLine()){
          tmpS = scan.nextLine().replaceAll("\\n", "").trim();
          tmp = tmpS.split(",");
          ArrayList<String> tmpList = new ArrayList<String>();
          for(int i = 0; i < tmp.length; i++){
              tmpList.add(tmp[i]);
          }
          list.add(tmpList);
      }
      while(!list.isEmpty()) {
          printRowLeftToRight();
          printColumnUpToDown();
          printRowRightToLeft();
          printColumnDownToUp();
      }  
  }
}
