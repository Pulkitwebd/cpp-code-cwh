#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // void setData(int a)
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "the value of a is " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object invokes the member function
    A a1;
    a1.setData(5).getData();
    return 0;
}