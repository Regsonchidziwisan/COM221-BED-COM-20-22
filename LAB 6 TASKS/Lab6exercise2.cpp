#include <iostream>
int main() {
    int rows, cols;
    do {
        std::cout << "Enter the number of rows (1 to 3): ";
        std::cin >> rows;
        if (rows < 1 || rows > 3) {
            std::cout << "Invalid input. Please enter a value between 1 and 3." << std::endl;
        }
    } while (rows < 1 || rows > 3);
    do {
        std::cout << "Enter the number of columns (1 to 3): ";
        std::cin >> cols;
        if (cols < 1 || cols > 3) {
            std::cout << "Invalid input. Please enter a value between 1 and 3." << std::endl;
        }
    } while (cols < 1 || cols > 3);
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }
    std::cout << "Enter the values for the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }
    std::cout << "The values of the array are:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
