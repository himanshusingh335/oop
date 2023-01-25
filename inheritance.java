class Shape {
    int width;
    int height;

    Shape(int w, int h) {
        width = w;
        height = h;
    }

    void draw() {
        System.out.println("Drawing a shape");
    }
}

class Rectangle extends Shape {
    Rectangle(int w, int h) {
        super(w, h); // call the constructor of the parent class
    }

    void draw() {
        super.draw(); // call the draw method of the parent class
        System.out.println("Drawing a rectangle");
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5, 7);
        rect.draw();
    }
}
