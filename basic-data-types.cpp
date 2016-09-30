// hackerrank.com
// Not to pretty but it works great!
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int integer;
    long int longInteger;
    long long int longLongInteger;
    char character;
    float floater;
    double doubler;
    scanf("%d %ld %lld %c %f %lf", &integer, &longInteger, &longLongInteger, &character, &floater, &doubler);
    printf("%d\n", integer);
    printf("%ld\n", longInteger);
    printf("%lld\n", longLongInteger);
    printf("%c\n", character);
    printf("%f\n", floater);
    printf("%lf\n", doubler);
    return 0;
}
