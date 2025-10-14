#include "include/calculator.hpp"
#include <iostream>
#include <string>
//only read value and check is good
int main() {
    std::string p = "";
    std::cout<<"Hello in calculator with parser!"<<std::endl;
    std::cout<<"Enter your operation to calculate: "<<std::endl;
    std::getline(std::cin, p);;
}