#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // constructor declaration.
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex c1(4, 8);
    c1.printNumber();

    // explicit call
    Complex c2 = Complex(5, 7);
    c2.printNumber();
    return 0;
}