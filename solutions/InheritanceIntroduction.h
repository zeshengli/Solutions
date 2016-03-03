//
//  InheritanceIntroduction.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef InheritanceIntroduction_h
#define InheritanceIntroduction_h
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
public:
    void triangle(){
        cout<<"I am a triangle\n";
    }
};
class Isosceles : public Triangle{
public:
    void isosceles(){
        cout<<"I am an isosceles triangle\n";
    }
    //Write your code here.
};
int main(){
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}

#endif /* InheritanceIntroduction_h */
