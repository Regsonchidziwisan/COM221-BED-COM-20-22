#include <iostream>
using namespace std;
int main() {
    int* pPointer = nullptr;
    int integerVar = 5;
    pPointer = &integerVar;
    cout << "integerVar: " << integerVar << "\n";
    cout << "Address of integerVar: " << &integerVar << "\n";
    cout << "pPointer: " << pPointer << "\n";
    cout << "Address of pPointer: " << &pPointer << "\n";
    return 0;
}