// Hackerrank

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++){
        int value = i;
        if(value > 9 && value % 2 == 0)
            printf("even");
        else if (value > 9 && value % 2 == 1)
            printf("odd");
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
        printf("\n");
    }
    return 0;
}
