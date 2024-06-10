#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() : length(0.0), width(0.0) {}

    // Destructor
    ~Rectangle() {}

    void setLength(float len) {
        length = len;
    }

    float getLength() const {
        return length;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float getWidth() const {
        return width;
    }

    float calculateArea() const {
        return length * width;
    }
};

int main() {
    
    Rectangle rect;

    float length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    float area = rect.calculateArea();
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}