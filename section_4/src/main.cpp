#include <iostream>

// /Users/stephenkennedy-clark/Desktop/C++/section_4 
// g++ -std=c++14 -Wall /Users/stephenkennedy-clark/Desktop/C++/section_4/src/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/section_4/bin/main


int main(){
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";

    int error_number = 1;
    std::cout << error_number / 0 << std::endl;
    return 0;
}