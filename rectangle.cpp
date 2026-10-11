#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double w) { width = w; }
    void setLength(double l) { length = l; }

 
    double getWidth() const { return width; }
    double getLength() const { return length; }
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); }
};

int main() {
    Rectangle r;
    r.setWidth(4.0);
   r.setLength(7.0);
    cout << "Width: " << r.getWidth() << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}