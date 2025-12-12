#include <iostream>
using namespace std;

class Rectangle 
{
private:
    float length;
    float width;

public:

    void setLength(float l)
     {
        length = l;
    }

    void setWidth(float w) 
    {
        width = w;
    }

    
    float getLength() 
    {
        return length;
    }

    float getWidth() 
    {
        return width;
    }

    
    float calculateArea() 
    {
        return length * width;
    }
};

int main() 
{
    Rectangle rect;
    float l, w;

    cout << "Enter Length: ";
    cin >> l;
    rect.setLength(l);

    cout << "Enter Width: ";
    cin >> w;
    rect.setWidth(w);

    cout << "\n--- Rectangle Details ---" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}
