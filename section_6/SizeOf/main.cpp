// vatiables 
#include <iostream>
#include <climits>


// g++ -Wall -std=c++14 /Users/stephenkennedy-clark/Desktop/C++/section_6/SizeOf/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/section_6/SizeOf/main

// cd /Users/stephenkennedy-clark/Desktop/C++/section_6/SizeOf


using namespace std;

int main() {
    /**********************************
     * Sozeof limitations
     **********************************/
    
    cout << "sizeof off information" << endl;
    cout << "+++++++++++++++++++++++" << endl;
    cout << "char: " << sizeof(char) << "bytes" << endl;
    cout << "int: " << sizeof(int) << "bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl;
    cout << "short: " << sizeof(short) << "bytes" << endl;
    cout << "long: " << sizeof(long) << "bytes" << endl;
    cout << "long long: " << sizeof(long long) << "bytes" << endl;
    cout << "+++++++++++++++++++++++" << endl;
    cout << "float: " << sizeof(float) << "bytes" << endl;
    cout << "double: " << sizeof(double) << "bytes" << endl;
    cout << "double long: " << sizeof(double long) << "bytes" << endl;
    cout << "variables defined in climits" << endl;
    cout << "++++++ Minimum Values +++++++" << endl;
    cout <<  "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long LONG: " << LLONG_MIN << endl;
    cout << "+++++++++++++++++++++++" << endl;


    return 0;
}
