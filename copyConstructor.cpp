#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {}
    Number(int num)
    {
        a = num;
    }

    //* When no copy constructor is found, compiler supplies its own copy constructor

    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void show()
    {
        cout << "Number is " << a << endl;
    }
};

int main()
{
    Number n1, n2, n3(34), n4;

    n3.show();

    // Number n4 = n3; //* Copy constructor invoked
    // n4.show();

    // Number n4(n3); //* Copy constructor invoked

    // n4.show();

    n4 = n3; //* Copy constructor not called
    n4.show();

    return 0;
}