#include <iostream>
using namespace std;


class Shape {
private:
    string color;
    float area;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    void setArea(float a) {
        area = a;
    }

    float getArea() {
        return area;
    }

    
    virtual void calculateArea() = 0;
    virtual void display() = 0;

    virtual ~Shape() {}
};


class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, string col) {
        radius = r;
        setColor(col);
    }

    void calculateArea() override {
        float a = 3.1416 * radius * radius;
        setArea(a);
    }

    void display() override {
        cout << "\n--- Circle Details ---" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w, string col) {
        length = l;
        width = w;
        setColor(col);
    }

    void calculateArea() override {
        float a = length * width;
        setArea(a);
    }

    void display() override {
        cout << "\n--- Rectangle Details ---" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    string color;
    float radius, length, width;

    cout << "Enter Circle Color: ";
    cin >> color;

    cout << "Enter Circle Radius: ";
    cin >> radius;

    Shape* s1 = new Circle(radius, color);
    s1->calculateArea();

    // Input for Rectangle
    cout << "\nEnter Rectangle Color: ";
    cin >> color;

    cout << "Enter Rectangle Length: ";
    cin >> length;

    cout << "Enter Rectangle Width: ";
    cin >> width;

    Shape* s2 = new Rectangle(length, width, color);
    s2->calculateArea();

    // Polymorphism using Shape pointer array
    Shape* shapes[2] = { s1, s2 };

    cout << "\n--- Displaying Shapes ---" << endl;
    for (int i = 0; i < 2; i++) {
        shapes[i]->display();
    }

    delete s1;
    delete s2;

    return 0;
}
