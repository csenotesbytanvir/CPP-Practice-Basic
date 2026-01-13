#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll;
    float  m1, m2 , m3;

    float Total() {
        return m1 + m2 + m3;
    }

    float Average() {
        return Total() / 3;
    }

    void Details() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << Total() << endl;
        cout << "Average Marks: " << Average() << endl;

    }
};

int main() {
    Student s1, s2;

    s1.name = "Tanvir";
    s1.roll = 101;
    s1.m1 = 85;
    s1.m2 = 90;
    s1.m3 = 78;

    s2.name = "Suborna";
    s2.roll = 102;
    s2.m1 = 70;
    s2.m2 = 75;
    s2.m3 = 80;

    s1.Details();
    s2.Details();

    return 0;
}