#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to reverse a string
std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = true;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            }
        } else {
            capitalize = true;
        }
    }
    return result;
}

int main() {
    std::ifstream file("textfile.txt"); // Assuming the text file is named "textfile.txt"
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::getline(file, fileData);

    // Count vowels
    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels in the text file: " << vowelCount << std::endl;

    // Reverse the statement
    std::string reversed = reverse(fileData);
    std::cout << "Reversed statement: " << reversed << std::endl;

    // Capitalize the second letter of each word
    std::string capitalized = capitalizeSecondLetter(fileData);
    std::cout << "Statement with second letter capitalized: " << capitalized << std::endl;

    file.close();

    return 0;
}