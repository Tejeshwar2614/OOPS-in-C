#include <iostream>
using namespace std;


// here w have studied about the static data member and the static member function
class cycle
{
    public:
    int name ;
    int marks ;
    char company;
    public:
    // static data member is used by the keyword static ....As the object of the class share same copy of the static member 
    static int my_datamember;
    cycle()  // This is the static ember function  
    {
        my_datamember++;
    }
};
int cycle::my_datamember=0;
int main()
{
    cycle Avalon; // Here i have created the first object of the class cycle ....
    Avalon.name = 12234;
    Avalon.marks = 1223;
    Avalon.company = 'A';
    cout<<"the name is : "<<Avalon.name<<endl;
    cout<<"the marks is : "<<Avalon.marks<<endl;
    cout<<"the company is : "<<Avalon.company<<endl;
    cycle BMW; // Here i have created the second object of the class cycle.....
    BMW.name = 123;
    BMW.marks = 345;
    BMW.company = 'b';
    cout<<"the name is: "<<BMW.name<<endl;
    cout<<"the marks is : "<<BMW.marks<<endl;
    cout<<"the company is : "<<BMW.company<<endl;

    // Here i am printing the no of object i have created .....
    cout <<"the number of the object we have used here: "<< cycle::my_datamember<<endl;
}