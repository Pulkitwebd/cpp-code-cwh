#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    // ptr->setData(3, 5);
    // ptr->getData();

    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item Number : " << i + 1;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}