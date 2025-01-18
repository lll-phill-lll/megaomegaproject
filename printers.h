#pragma once
#include <iostream>

void Print(int num) {
    std::cout << "[" << num << "]" << std::endl;
}

void Print(const std::string& msg) {
    std::cout << "[" << msg << "]" << std::endl;
}
