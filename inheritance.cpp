#include<iostream>

using namespace std;

class Shape {
 public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    void draw() {
        cout << "Drawing a shape" << endl;
    }
 protected:
    int width;
    int height;
};

class Rectangle: public Shape {
 public:
    // call the constructor of the base class
    Rectangle(int w, int h): Shape(w, h) {
    }
    void draw() {
        Shape::draw(); // call the draw method of the base class
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Rectangle rect(5, 7);
    rect.draw();
    return 0;
}