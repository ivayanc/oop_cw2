//
// Created by Ivan Yanchenko on 29.10.2022.
//

#include "Square.h"

Square::Square(double & a) {
    this->a = a;
}

double Square::calculateArea() {
    return a*a;
}

void Square::writeToConsole() {
    std::cout << std::fixed << std::setprecision(4) << "Square with side = " << a
              << " area = " << calculateArea() << "\n";
}
