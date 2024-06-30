#include<iostream>
using namespace std;

// Here we are studing the use of the reference in c++..

// Here we will study about the pass by value and pass by reference 

int update(int n)
{
    n++;
}

int update_using_reference(int &n)
{
    n++;
}
int main()
{
    /*int n = 14;       // This is our normal variable 
    int &i = n;         // This is our reference variable ....
    cout << n << endl;
    cout << i << endl;

    n++;             // Here we are increment the value of the n so it will print the value 15 
    cout << n << endl;
    i++ ;           // here we are increment the value of the i which is the reference and it is pointing the n value so it will increment as 16..
    cout << i << endl;*/
    int b = 24  ;
    cout << "before -> " << b << endl;
    cout << "after -> " << update(b) << endl;  

    // In these both cases the value of the n is same after increment the value of the n in update function also..
    // this type of passing or caling is known as the pass by value .....

    // in pass by value the value is copy the function value and that value will create the new memory  ....
    update_using_reference(b);

    cout << "after reference -> " << b << endl;

     // in this we are calling the function which having the reference value 
     // this type of passing or calling is called as the pass by reference ....

     // in pass by reference the value will not create the new memory for the value ...
     // the name will be the different but the memory will be the same ......

     
}