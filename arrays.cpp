// hackerrank
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, current;
    scanf("%d", &size);
    int list[size]; 
    for (int i = 0; i < size; i++){
        scanf("%d", &current);
        list[i] = current;
    }
    for (int i = size -1; i >= 0; i--){
        current = list[i];
        printf("%d ", current);
    }
    return 0;
}
