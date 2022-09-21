#include<iostream>
using namespace std;

//* It is not good to use static with inline function

int product(int a, int b){
 static int c = 0; // This will execute only once
 c = c + 1;
 return  a * b + c;
}


//* Use inline only in very function
// inline int product(int a, int b){
//  int c = a * b;
//  return c;
// }

int main(){
    int a, b;
    cout<<"enter the value of a, b"<<endl;
    cin>>a>>b;
    cout<<"the sum a and b is "<<product(a,b)<<endl;
    cout<<"the sum a and b is "<<product(a,b)<<endl;
    cout<<"the sum a and b is "<<product(a,b)<<endl;
    cout<<"the sum a and b is "<<product(a,b)<<endl;
    cout<<"the sum a and b is "<<product(a,b)<<endl;
    cout<<"the sum a and b is "<<product(a,b)<<endl;
}