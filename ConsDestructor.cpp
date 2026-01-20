#include <iostream>
using namespace std;
class Triangle{
    public:
    int base, height;
    Triangle(){ //default constructor
        base=0;
        height=0;
    }
    Triangle(int b, int h){ //parameterized constructor
        base=b;
        height=h;
    }
    Triangle(Triangle &ob) //copy constructor
    {
        base= ob.base;
        height=ob.height;
    }
    ~Triangle() //Destructor
    {
        cout << "Destructor called" <<endl;
    }
    void display(){
        cout << "Base: "<<base<<" Height: "<<height<<endl;
    }
};
int main(){
    Triangle t1;
    t1.display();
    Triangle t2(6,5);
    t2.display();
    Triangle t3(t2);
    t3.display();
}