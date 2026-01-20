#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    int x,y;

public:
    Point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    Point(Point &p)
    {
        x=p.x;
        y=p.y;
    }
    int getX(){return x;}
    int getY(){return y;}
    double distance (Point p){
        int dx= p.x-x;
        int dy= p.x-y;
        return sqrt(dx*dx+dy*dy);
    }
};
int main()
{
    Point p1(1,2);
    Point p2(4,6);
    cout << "Distance: "<< p1.distance(p2)<< endl;
    return 0;
}