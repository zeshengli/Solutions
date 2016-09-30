// Hackerrank.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int value;
    scanf("%d", &value);
    if(value > 9)
        printf("Greater than 9");
    else if( value == 9)
        printf("nine");
        else if (value == 8)
        printf("eight");
        else if (value == 7)
        printf("seven");
        else if (value == 6)
        printf("six");
        else if (value == 5)
        printf("five");
        else if (value == 4)
        printf("four");
        else if (value == 3)
        printf("three");
        else if (value == 2)
        printf("two");
        else if (value == 1)
        printf("one");
    return 0;
}
