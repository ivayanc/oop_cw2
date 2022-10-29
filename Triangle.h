//
// Created by Ivan Yanchenko on 29.10.2022.
//

#ifndef CW2_TRIANGLE_H
#define CW2_TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape{
public:
    double calculateArea() override;
    void writeToConsole() override;
    Triangle(double & a, double & b, double & c);
private:
    double a{}, b{}, c{};
};


#endif //CW2_TRIANGLE_H
