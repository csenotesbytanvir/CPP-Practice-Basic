#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string productName;
    int productID;
    double price;

public:
    Product()
    {
        productName = "Unnamed";
        productID = 0;
        price = 0.0;
    }
    Product(string n, int i, double p)
    {
        productName = n;
        productID = i;
        price = p;
    }
    ~Product()
    {
        cout << "Destructor called" << endl;
    }
    void update(string n, int i, double p)
    {

        productName = n;
        productID = i;
        price = p;
    }
    void display()
    {
        cout << "Product: " << productName << " ID: " << productID << " Price: " << price << endl;
    }
};
int main()
{
    Product p1;
    p1.display();
    Product p2("Table", 191, 70.2);
    p2.display();
    p1.update("Chair", 352, 10.20);
    p1. display();
    return 0;
}