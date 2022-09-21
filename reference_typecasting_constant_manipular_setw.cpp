#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    // int num1, num2;
    // cout<<"Enter the value of num1\n"; //'<<'is called insertion operator
    // cin>>num1; //'>>'is called extraction operator

    // cout<<"Enter the value of num2\n";
    // cin>>num2; 

    // cout<<"sum of num1 and num2 is "<<num1+num2;

    // *reference varibale
    // float x = 455;
    // float & y = x;

    // cout<<x<<endl;
    // cout<<y<<endl;

    // *typecasting
    // int a = 45;
    // float b = 45.4;

    // cout<<"the value of a is"<<float(a);
    // cout<<"the value of b is"<<float(b);;

    //*Constant in C++
    // const int a = 4; 

    //*manipulator
    // cout<<"the value of b is" <<endl;
    

    //!setw will only work after including iomanip file
    int a = 4, b = 5, c = 10;

    cout<<"the value of a is"<<setw(4)<<a<<endl;
    cout<<"the value of b is"<<setw(4)<<b<<endl;
    cout<<"the value of c is"<<setw(4)<<c<<endl;

    //*operator precedence
     
     


    return 0;
}