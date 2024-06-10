#include <iostream>
#include <string>
#include <limits>

int main() {
    int* dynamicInt = new int;
    std::string* dynamicString = new std::string;
    std::cout << "Please enter an integer: ";
    std::cin >> *dynamicInt;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a string: ";
    std::getline(std::cin, *dynamicString);
    std::cout << "The value of the dynamically allocated integer is: " << *dynamicInt << std::endl;
    std::cout << "The value of the dynamically allocated string is: " << *dynamicString << std::endl;
    delete dynamicInt;
    delete dynamicString;
    return 0;
}