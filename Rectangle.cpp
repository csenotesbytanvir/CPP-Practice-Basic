#include <iostream>
using namespace std;
class rectangle
{
private:
    double length, width;

public:
    void setvalue(double b, double h)
    {

        length = b;
        width = h;
    }
    double getlength()
    {
        return length;
    }
    double getwidth()
    {
        return width;
    }
    double getArea()
    {
        return (length * width);
    }
    double getperimeter()
    {
        return (2*(length+width));
    }
};
int main()
{
    rectangle t1;
    t1.setvalue(5.5, 3.0);
    cout << "Length: " << t1.getlength() << endl;
    cout << "width: " << t1.getwidth() << endl;
    cout << "Area: " << t1.getArea() << endl;
    cout << "Perimeter: "<< t1.getperimeter()<<endl;
    return 0;
}