class Shape:
    def __init__(self, w, h):
        self.width = w
        self.height = h

    def draw(self):
        print("Drawing a shape")

class Rectangle(Shape):
    def __init__(self, w, h):
        super().__init__(w, h)  # call the constructor of the parent class

    def draw(self):
        super().draw()  # call the draw method of the parent class
        print("Drawing a rectangle")

rect = Rectangle(5, 7)
rect.draw()
