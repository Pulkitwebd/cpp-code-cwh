#include <iostream>
using namespace std;


//* First example
class Base1
{
public:
    void greet()
    {
        cout << "how are you";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kaise ho";
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
};

//*Second example
class A{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};

class B : public A{
    public:
     void say(){
        cout<<"Hello all"<<endl;
     }
};

int main()
{
    // Derived d;
    // d.greet();

    B b;
    b.say();
    return 0;
}