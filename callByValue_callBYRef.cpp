#include<iostream>
using namespace std;


//* you can revise callbyvalue and call by ref from 
//*https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-16/

int sum(int a, int b ){
int c = a + b;
return c;
}

int main(){
    cout<<"The sum of values  is "<<sum(5, 89);
    return 0;
}