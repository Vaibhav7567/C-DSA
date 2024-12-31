#include<iostream>
using namespace std;
// Abstract class showing WHAT a shape can do
class Shape {  
public:
    virtual void draw() = 0;  // Just says shapes can be drawn
};

// Concrete class showing HOW to draw a circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Concrete class showing HOW to draw a square
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Circle c;
    c.draw();  // User just knows they can draw, doesn't need to know how
    
    Square s;
    s.draw();
}   