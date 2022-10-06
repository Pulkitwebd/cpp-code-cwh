#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *ptr = &a;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    //*New Keyword

    int *ptri = new int(50);

    cout << *ptri << endl;


    //continous memory block storage
    int* arr = new int[3];

    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;

    // delete [] arr;

    // cout<<"the at arr[0] is "<< arr[0]<<endl; 
    // cout<<"the at arr[1] is "<< arr[1]<<endl; 
    // cout<<"the at arr[2] is "<< arr[2]<<endl; 

    return 0;
}