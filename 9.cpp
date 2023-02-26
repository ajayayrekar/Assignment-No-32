/*9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double area;

public:
    Shape() {
        area = 0;
    }

    virtual void calculateArea() {}

    virtual void displayArea() {
        cout << "Area: " << area << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    void calculateArea() {
        area = 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        area = length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() {
        area = M_PI * radius * radius;
    }
};

int main() {
    int choice;
    double a, b;

    do {
        cout << "Choose a shape to calculate its area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter base and height of the triangle: ";
            cin >> a >> b;
            Triangle t(a, b);
            t.calculateArea();
            t.displayArea();
            break;
        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> a >> b;
            Rectangle r(a, b);
            r.calculateArea();
            r.displayArea();
            break;
        case 3:
            cout << "Enter radius of the circle: ";
            cin >> a;
            Circle c(a);
            c.calculateArea();
            c.displayArea();
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }

    } while (choice != 4);

    return 0;
}
