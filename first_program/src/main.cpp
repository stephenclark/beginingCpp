#include <iostream>
//g++ -Wall -g -O0 -std=c++14 /Users/stephenkennedy-clark/Desktop/C++/first_program/src/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/first_program/bin/main

int main() {
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100" << std::endl;
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    return 0;
}