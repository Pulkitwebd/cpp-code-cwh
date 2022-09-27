#include <iostream>
using namespace std;

// forward declarartion
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    };

    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;
    //*indivailly declaring function as friend
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    //*Aliter : Declaring the entire class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(4, 5);
    o1.printNumber();

    o2.setNumber(5, 8);
    o2.printNumber();

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    int res1 = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << res1 << endl;

    return 0;
}