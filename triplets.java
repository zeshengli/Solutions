// hackerrank

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static int[]  fillArrays(Scanner in){
        int[] list = new int[3];
        for(int i = 0; i < 3; i++){
            list[i] = in.nextInt();
        }
        return list;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] listA = fillArrays(scan);
        int[] listB = fillArrays(scan);
        int aSum = 0;
        int bSum = 0;
        for (int i = 0; i < 3; i++){
            if(listA[i] > listB[i]){
                aSum++;
            }
            else if(listA[i] < listB[i]){
                bSum++;
            }
        }
        System.out.printf("%d %d", aSum, bSum);
        scan.close();
        return; 
    }
}
