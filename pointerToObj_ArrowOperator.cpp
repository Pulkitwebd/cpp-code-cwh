#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(21, 45); 
    // or -> arrow operator
    ptr->setData(5, 1);
    ptr->getData();
    // (*ptr).getData();

    //Array of object
    Complex *ptr1 = new Complex[4];
    ptr1->setData(9, 6);
    ptr1->getData();

    return 0;
}