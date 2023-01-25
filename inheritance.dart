class Shape {
  int width;
  int height;

  Shape(int w, int h)
      : width = w,
        height = h;

  void draw() {
    print("Drawing a shape");
  }
}

class Rectangle extends Shape {
  Rectangle(int w, int h) : super(w, h);

  void draw() {
    super.draw();
    print("Drawing a rectangle");
  }
}

void main() {
  Rectangle rect = Rectangle(5, 7);
  rect?.draw();
}
