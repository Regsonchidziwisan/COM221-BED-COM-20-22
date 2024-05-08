#include <iostream>
#include <string>

int main() {
    std::string elements[] = {"B123" , "C234" , "A345" , "C15" , "B177" , "G3003" , "C235" , "B179"} ;
    int size = sizeof(elements) /sizeof(elements[0]);
    std::cout << "Elements starting with 'B' : " << std::endl;
    for (int i = 0; i < size; i++) {
        if (elements[i][0] == 'B') {
            std::cout << elements[i] <<std::endl;
        }
    }
    return 0;
}