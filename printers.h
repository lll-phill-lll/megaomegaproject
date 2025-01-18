#pragma once
#include <iostream>

#include "zoo.h"

void Print(int num) {
    std::cout << "[" << num << "]" << std::endl;
}

void Print(const std::string& msg) {
    std::cout << "[" << msg << "]" << std::endl;
}

void Print(const Zoo& zoo) {
    std::cout << "Zoo: [" << zoo.Zebra << "]" << std::endl;
    std::cout << "Zoo: [" << zoo.Cat << "]" << std::endl;
}
