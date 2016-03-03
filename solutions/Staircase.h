//
//  Staircase.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef Staircase_h
#define Staircase_h

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pound = 0;
    for (int i = 0; i < n; i++) {
        for (int k = n - i ; k > 1; k--) {
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++) {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
#endif /* Staircase_h */
