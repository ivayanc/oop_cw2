//
// Created by Ivan Yanchenko on 29.10.2022.
//

#include "Triangle.h"

Triangle::Triangle(double &a, double &b, double &c) {
    this->a = a, this->b = b, this->c = c;
}

double Triangle::calculateArea() {
    double p = (a + b + c) / 2;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::writeToConsole() {
    std::cout << std::fixed << std::setprecision(4) << "Triangle with sides = " << a << ";" << b << ";" << c
              << " area = " << calculateArea() << "\n";
}