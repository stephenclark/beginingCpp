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
    // we have to rewrite this part...
    return 0;
}