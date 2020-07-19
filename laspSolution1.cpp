class Point final {
public:
Point() : x { 5 }, y { 5 } { }
Point(const unsigned int initialX, const unsigned int initialY) :
x { initialX }, y { initialY } { }
void setCoordinates(const unsigned int newX, const unsigned int newY) {
x = newX;
y = newY;
}

private:
unsigned int x;
unsigned int y;
};

class Shape {
public:
Shape() : isVisible { false } { }
virtual ~Shape() = default;
void moveTo(const Point& newCenterPoint) {
hide();
centerPoint = newCenterPoint;
show();
}
virtual void show() {
isVisible = true;
}
virtual void hide() {
isVisible = false;
}
private:
Point centerPoint;
bool isVisible;


};


class Rectangle : public Shape {
public:
Rectangle() : width { 2 }, height { 1 } { }
Rectangle(const unsigned int initialWidth, const unsigned int initialHeight) :
width { initialWidth }, height { initialHeight } { }
virtual void show() override {
Shape::show();
// ...code to show a rectangle here...
}
virtual void hide() override {
Shape::hide();
// ...code to hide a rectangle here...
}
void setWidth(const unsigned int newWidth) {
width = newWidth;
}
void setHeight(const unsigned int newHeight) {
height = newHeight;
}
void setEdges(const unsigned int newWidth, const unsigned int newHeight) {
width = newWidth;
height = newHeight;
}
unsigned long long getArea() const {
return static_cast<unsigned long long>(width) * height;
}
void setEdgesToEqualLength(const unsigned int newLength) {
setEdges(newLength, newLength);
}
bool isSquare() const {
return width == height;
}
// ...
private:
unsigned int width;
unsigned int height;
};
