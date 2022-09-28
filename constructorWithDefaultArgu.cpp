#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int a, int b = 6)
    {
        data1 = a;
        data2 = b;
    }
    void printNumber();
};

void Simple ::printNumber()
{
    cout << "data1 is " << data1 << endl;
    cout << "data2 is " << data2 << endl;
}

int main()
{
    Simple c1(3);
    c1.printNumber();

    return 0;
}