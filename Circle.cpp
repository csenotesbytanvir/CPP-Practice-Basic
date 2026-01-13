#include <iostream>

using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }

    double getCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle c1;

    c1.setRadius(5);

    cout << "Area: " << c1.getArea() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;

    return 0;
}