#include <iostream>
using namespace std;

class Rectangle {
protected:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    double area() {
        return length * width;
    }
};

class Block : public Rectangle {
private:
    double height;

public:
    void setHeight(double h) {
        height = h;
    }

    void displayHeight() {
        cout << "Height: " << height << endl;
    }

    double volume() {
        return area() * height;
    }
};

int main() {
    Block block;
    block.setDimensions(5.0, 4.0);
    block.setHeight(3.0);

    block.displayDimensions();
    block.displayHeight(); 

    cout << "Area of rectangle: " << block.area() << endl;
    cout << "Volume of block: " << block.volume() << endl;

    return 0;
}