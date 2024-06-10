#include <iostream>
#include <cmath>

void calculateTriangleArea() {
    double base, height;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    double area = 0.5 * base * height;
    std::cout << "The area of the triangle is: " << area << std::endl;
}

void calculateRectangleArea() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    double area = length * width;
    std::cout << "The area of the rectangle is: " << area << std::endl;
}
void calculateSquareArea() {
    double side;
    std::cout << "Enter the side length of the square: ";
    std::cin >> side;
    double area = side * side;
    std::cout << "The area of the square is: " << area << std::endl;
}

int main() {
    char choice;

    do {
        std::cout << "Select a shape to calculate the area for (t - triangle, r - rectangle, s - square, q - quit): ";
        std::cin >> choice;

        switch (choice) {
            case 't':
                 calculateTriangleArea();
                 break;
            case 'r':
                 calculateRectangleArea();
                 break;
            case 's':
                 calculateSquareArea();
                 break;
            case 'q':
                 std::cout << "Exiting program...." << std::endl;
                 break;
            default:
                 std::cout << "Invalid input. Please try again." << std::endl;
        }
    } while (choice != 'q');
    return 0;
}