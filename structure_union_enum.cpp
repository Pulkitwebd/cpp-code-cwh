#include <iostream>
using namespace std;

 //*Unlike an array, a structure can contain many different data types
// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };
//* anoteher way of using srtuct
// typedef struct owner {
//    int eId;
//    float salary; 
// } ow;

union money {
   int rice; //4
   char car;  //1
   float pounds; //4
};
 
int main()
{
    // struct employee Harry;

    // Harry.eId = 1;
    // Harry.favChar = 'h';
    // Harry.salary = 300.01;

    // cout<<Harry.favChar<<endl;

    // ow pulkit;

    // pulkit.eId = 2;
    // pulkit.salary = 35000;

    // cout<<pulkit.eId<<endl;
    // cout<<pulkit.salary<<endl;

    //*union can be used one at a time
    // union money m1;
    // m1.rice = 44;
    // cout<<m1.rice;

    //* enum 
    // enum Meal {breakfast, lunch , dinner};

    // Meal m1 = breakfast;
    // cout<<m1<<endl; //0
    // cout<<breakfast<<endl; //0 
    return 0; 
}