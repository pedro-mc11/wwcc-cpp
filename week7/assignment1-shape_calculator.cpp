#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {} 

    int getLength() const { return length; }
    int getWidth() const { return width; }

    double area() {
        return length * width;
    }
    void printInfo() {
        cout << "Rectangle (Length: " << getLength() << ", Width: " << getWidth() << ")" << endl;
        cout << "Area: " << area() << endl;
        cout << "Passing area by refernce: " << area() << endl;
    }
    void setLength(int l) {
        length = l;
    }
    void setwidth(int w) {
        width = w;
    }
   };

class Circle {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    int getRadius() const { return radius; }

    double area() {
        return 3.14159 * pow(radius, 2.0);
    }
    double circumference() {
        return 2 * 3.14159 * getRadius();
    }
    void printInfo() {
        cout << "\nCircle (Radius: " << getRadius() << ")" << endl;
        cout << "Area: " << fixed << setprecision(2) << area() << endl;
        cout << "Circumference: " << fixed << setprecision(2) << circumference() << endl;
    }
    void circleDetails() {
        cout << "\nCircle Details:" << endl;
        cout << "Radius: " << getRadius() << endl;
        cout << "Area: π x radius² = 3.14159 x " << (getRadius() * getRadius()) << " = " << fixed << setprecision(2) << area() << endl;
        cout << "Circumference: 2 x π x radius = 2 x 3.14159 x " << getRadius() << " = " << fixed << setprecision(2) << circumference() << endl;

    }
};


int main() {

   cout << "SHAPE CALCULATOR" << endl;
   cout << "----------------" << endl;

   Rectangle rectangle(5,3);
   rectangle.printInfo();
   
    Circle circle(4);
    circle.printInfo();
    circle.circleDetails();




    return 0;
}