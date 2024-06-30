#include <iostream>
using namespace std;

// now we will study about inline function
// inline function => inline function is the function whic is similar to the nomral function .....

// The difference between the normal function and the inline function is that inline function is used
// to increase the excetution time of the program
// Where as the normal function is used to improve the reusability of the code and make it maintainable 

inline int my_details(int phonenumber ,int age)
{
    return phonenumber;
    return age;
} 
int main()
{
    int x = 23;
    int y = 134;
    cout<<"The phone number of the Tejeshwar is : "<<my_details(x,y)<<endl;
    //cout<<"the Age of the tejeshwar singh is : "<<my_details(y,x)<<endl;
}

// The major difference is that inline function using the keyword "inline " where as the normal function using data_type and the 
//function name