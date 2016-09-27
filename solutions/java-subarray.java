// hackerrank

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static int addSubArrays(int[] arr, int start){
        int sum = 0;
        for (int end = start; end < arr.length; end++){
            int tmp = 0;
            for(int i = start; i <= end; i++){
                tmp+= arr[i];
            }
            if(tmp < 0)sum++;
        }
        return sum;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int[] arr = new int[num];
        for(int i = 0; i < arr.length; i++){
            arr[i] = scan.nextInt();
        }
        int sum = 0;
        for(int i = 0; i < arr.length; i++){
            sum += addSubArrays(arr, i);
        }
        System.out.println(sum);
    }
}
