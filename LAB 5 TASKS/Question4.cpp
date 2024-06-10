#include <iostream>
#include <string>
#include <sstream>

int main() {
    int userInput;
    bool isValid = false;
    while (!isValid) {
        std::cout << "Please enter an integer value between 5 and 10: ";
        std::string input;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        if (iss >> userInput) {
            if ( userInput >= 5 && userInput <= 10) {
                   isValid = true;
        } else {
            std::cout << "Invalid input. Please enter a valid integer ." << std::endl;
        }
    }
    std::cout << "Input value " << userInput << " has been accepted." << std::endl;
    return 0;
}
}