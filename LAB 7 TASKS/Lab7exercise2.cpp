#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() : length(0.0), width(0.0) {}

    Rectangle(float len, float wid) : length(len), width(wid) {}

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
    Rectangle rect1;
    
    float length1, width1;
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length1;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width1;

    rect1.setLength(length1);
    rect1.setWidth(width1);

    float area1 = rect1.calculateArea();
    std::cout << "The area of the first rectangle is: " << area1 << std::endl;

    float length2, width2;
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    Rectangle rect2(length2, width2);

    float area2 = rect2.calculateArea();
    std::cout << "The area of the second rectangle is: " << area2 << std::endl;

    return 0;
}
