#include<iostream>
using namespace std;

//* Recursion is the technique of making a function call itself. 
//* This technique provides a way to break complicated problems down into simple problems which are easier to solve.
// int factorial(int num){
//   if(num <= 1){
//     return 1;
//   }
//   return num * factorial(num - 1);
// }


int fibonacci(int term){
if(term < 3){
    return 1;
}
return fibonacci(term -2 ) + fibonacci(term - 1);
}

int main(){
    
    // int num;
    // cout<<"Enter number to find factorial"<<endl;
    // cin>>num;
    // cout<<"factorial of "<<num<<" is "<<factorial(num);

    int term;
    cout<<"Enter term to find fibonacci of the term"<<endl;
    cin>>term;
    cout<<"the term in fibonacci sequence at position is "<<term<<" is "<<fibonacci(term);
    return 0;
}