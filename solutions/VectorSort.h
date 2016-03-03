//
//  VectorSort.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef VectorSort_h
#define VectorSort_h
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, val;
    vector<int> v;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

#endif /* VectorSort_h */
