//
// Created by Ivan Yanchenko on 29.10.2022.
//

#ifndef CW2_SHAPE_H
#define CW2_SHAPE_H

#include <iostream>
#include <iomanip>
#include "cmath"

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual void writeToConsole() = 0;
};


#endif //CW2_SHAPE_H
