#include <iostream>
#include <string>
int main()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";
    // read the name
    std::string name;
    std::cin >> name;
    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";
    // the number of blanks surrounding the greeting
    const int pad = 1;
    // total number of rows ot write
    const int rows = pad * 2 + 3;

    // write rows of output
    int r = 0;

    // invariant: we have written r rows so far
    while (r != rows) {
        // write out a row of output
        std::cout << std::endl;
        ++r;
    }




    return 0;
}