//
//  Header.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef PlusMinus_h
#define PlusMinus_h
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    double zero, neg, pos;
    zero = neg = pos = 0.0;
    for(int i = 0; i < n; i++) {
        if ( arr[i] > 0) pos++;
        else if( arr[i] == 0) zero++;
        else neg++;
    }
    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zero/n << endl;
    return 0;
}

#endif /* PlusMinus_h */
