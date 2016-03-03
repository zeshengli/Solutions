//
//  PowerOfThree.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef PowerOfThree_h
#define PowerOfThree_h
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        double power = log(n) /log(3);
        if (n % 10 == 1 || n % 10 == 3 || n % 10 == 9 || n % 10 == 7)
        {
            int x = ceil(power);
            int t = pow(3.0, x);
            if (n == t) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};

#endif /* PowerOfThree_h */
