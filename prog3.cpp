#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
    void setColor(string c) 
    { 
        color = c; 
    }
    string getColor()
     {
         return color; 
        }

    void setArea(double a)
     { 
        area = a; 
    }
    double getArea() 
    { 
        return area; 
    }
};

class Circle : public Shape 
{
private:
    double radius;

public:
    void setRadius(double r) { radius = r; }

    void calculateArea() {
        setArea(3.14 * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    void setValues(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        setArea(length * width);
    }
};

int main() {
    Circle c;
    double r;
    string color;

    cout << "Enter Circle Radius: ";
    cin >> r;
    c.setRadius(r);

    cout << "Enter Circle Color: ";
    cin >> color;
    c.setColor(color);

    c.calculateArea();

    cout << "\nCircle Color: " << c.getColor() << endl;
    cout << "Circle Area: " << c.getArea() << endl;

    Rectangle rect;
    double l, w;

    cout << "\nEnter Rectangle Length: ";
    cin >> l;
    cout << "Enter Rectangle Width: ";
    cin >> w;
    rect.setValues(l, w);

    cout << "Enter Rectangle Color: ";
    cin >> color;
    rect.setColor(color);

    rect.calculateArea();

    cout << "\nRectangle Color: " << rect.getColor() << endl;
    cout << "Rectangle Area: " << rect.getArea() << endl;

    return 0;
}