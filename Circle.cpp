//
// Created by Ivan Yanchenko on 29.10.2022.
//

#include "Circle.h"

Circle::Circle(double &r) {
    this->r = r;
}

double Circle::calculateArea() {
    return M_PI * r * r;
}

void Circle::writeToConsole() {
    std::cout << std::fixed << std::setprecision(4) << "Circle with radius = " << r
              << " area = " << calculateArea() << "\n";
}