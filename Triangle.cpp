#include <iostream>
using namespace std;
class triangle
{
private:
    double base, height;

public:
    void setvalue(double b, double h)
    {

        base = b;
        height = h;
    }
    double getbase()
    {
        return base;
    }
    double getheight()
    {
        return height;
    }
    double getArea()
    {
        return (0.5 * base * height);
    }
};
int main()
{
    triangle t1;
    t1.setvalue(5.5, 3.0);
    cout << "Base: " << t1.getbase() << endl;
    cout << "Height: " << t1.getheight() << endl;
    cout << "Area: " << t1.getArea() << endl;
}