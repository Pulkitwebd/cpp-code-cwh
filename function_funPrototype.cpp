#include<iostream>
using namespace std;

//* function => do once and used forever


//* Function prototype
//* type function-name (arguments)


int sum(int a, int b); //* acceptable
// int sum(int a, b) //!not acceptable
// int sum(int, int) //*acceptable

void g(void); //also acceptable
// void g() //also acceptable

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);

    g();
    return 0;

}

int sum(int a, int b){
int c = a + b;
return c; 
}

void g(){
    cout<<"\nHello, good morning";
}