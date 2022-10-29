//
// Created by Ivan Yanchenko on 29.10.2022.
//

#ifndef CW2_SQUARE_H
#define CW2_SQUARE_H

#include "Shape.h"

class Square: public Shape{
public:
    double calculateArea() override;
    void writeToConsole() override;
    Square(double & a);
private:
    double a{};
};


#endif //CW2_SQUARE_H
