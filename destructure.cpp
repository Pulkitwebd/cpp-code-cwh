#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructure is called for object number " << count << endl;
    }
    //* destructure
    ~num()
    {
        cout << "This is the time when my destructure is called " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside the main function" << endl;
    cout << "Creating two objects" << endl;

    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting  this block" << endl;
    }

    cout << "Back to main" << endl;
    return 0;
}