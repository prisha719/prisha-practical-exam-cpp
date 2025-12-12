#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal
 {
public:
    void sound() override
     {
        cout << "Dog barks." << endl;
    }
    void move() override
     {
        cout << "Dog runs." << endl;
    }
};

class Bird : public Animal
 {
public:
    void sound() override 
    {
        cout << "Bird chirps." << endl;
    }
    void move() override 
    {
        cout << "Bird flies." << endl;
    }
};

int main()
 {
    int choice;

    cout << "Choose an Animal:" << endl;
    cout << "1. Dog" << endl;
    cout << "2. Bird" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    Animal* a = nullptr;

    if (choice == 1) 
    {
        a = new Dog();
    } 
    else if (choice == 2)
     {
        a = new Bird();
    } 
    else 
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << "\n--- Animal Actions ---" << endl;
    a->sound();
    a->move();

    delete a;
    return 0;
}
