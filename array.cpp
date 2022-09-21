
#include<iostream>
using namespace std;

int main(){
// *array is collection of item of similar types

    int marks[4] = {23, 45, 56, 89};

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    // int i = 0;
    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while (i < 4);
    
    
    // int newArr[2];

    // newArr[0] = 3; 
    // newArr[1] = 5;

    // cout<<newArr[0]<<endl;
    // cout<<newArr[1]<<endl;
    
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //* pointer and array 

    int* p = marks;

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;

    //* When used in declaration (string* ptr), it creates a pointer variable.
    //* When not used in declaration, it act as a dereference operator.

    return 0;
}