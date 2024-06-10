#include <iostream>
using namespace std;
int main() {
    int* pPointer = nullptr;
    int numbersArray[3] = {10, 20, 30};
    pPointer = numbersArray;
    cout << "Address at pPointer: " << pPointer << "\n";
    cout << "Address of numbersArray[0]: " << numbersArray << "\n";
    cout << "Value at pPointer: " << *pPointer << "\n";
    cout << "Value at ++pPointer: " << *(++pPointer) << "\n";
    pPointer = numbersArray;
    cout << "Value at pPointer++: " << *(pPointer++) << "\n";
    return 0;
}