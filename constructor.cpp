#include <iostream>
using namespace std;

class Complex
{
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    int a, b;
    public:
    Complex(); // constructor declaration.
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex()
{
    a = 0;
    b = 0;
    cout<<"hello world"<<endl;
}

int main()
{
    Complex c1;
    // c1.printNumber();
    return 0;
}

/* Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/