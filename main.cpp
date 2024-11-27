#include <iostream>
#include <cmath> // For M_PI
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function
    virtual double calculateArea() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Overriding calculateArea()
    double calculateArea() const override {
        return M_PI * radius * radius; // Area = πr²
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overriding calculateArea()
    double calculateArea() const override {
        return length * width; // Area = length × width
    }
};

// Main function
int main() {
    // Create objects of Circle and Rectangle
    Circle circle(5.0); // Circle with radius 5
    Rectangle rectangle(4.0, 6.0); // Rectangle with length 4 and width 6

    // Calculate and display areas
    cout << "Area of the circle: " << circle.calculateArea() << endl;
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}