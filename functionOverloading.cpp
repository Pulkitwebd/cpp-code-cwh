#include<iostream>
using namespace std;

int add(int a, int b, int c){
    return a+b+c;
}

int add(int a, int b){
    return a+b;
}

int main(){
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3, 6 and 9 is "<<add(3,6, 9);
    return 0;
}