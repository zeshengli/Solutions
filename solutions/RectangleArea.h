//
//  RectangleArea.h
//  solutions
//
//  Created by Stephen Rawson on 3/2/16.
//  Copyright © 2016 Stephen Rawson. All rights reserved.
//

#ifndef RectangleArea_h
#define RectangleArea_h
class Rectangle {
public:
    void Display() const {
        cout << width << " " << height << "\n";
    }
protected:
    int width, height;
};
class RectangleArea : public Rectangle {
public:
    void Input() {
        cin >> width >> height;
    }
    void Display() const {
        cout << width * height << "\n";
    }
};

#endif /* RectangleArea_h */
