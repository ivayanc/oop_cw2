//
// Created by Ivan Yanchenko on 29.10.2022.
//

#ifndef CW2_CIRCLE_H
#define CW2_CIRCLE_H

#include "Shape.h"

class Circle: public Shape{
public:
    double calculateArea() override;
    void writeToConsole() override;
    Circle(double & r);
private:
    double r{};
};


#endif //CW2_CIRCLE_H
