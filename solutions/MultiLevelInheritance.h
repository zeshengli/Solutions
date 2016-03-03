//
//  MultiLevelInheritance.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef MultiLevelInheritance_h
#define MultiLevelInheritance_h
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
};
class Equilateral : public Isosceles {
public:
    void equilateral() {
        cout << "I am an equilateral triangle\n";
    }
};
//Write your code here.
int main(){
    
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

#endif /* MultiLevelInheritance_h */
