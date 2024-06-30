#include<iostream>
using namespace std;

// here we have studied about the array of object ....
// array of object is to store the user data in the array using the object and class...
class tejeshwar 
{
    public:
    string name ;
    int id;
    tejeshwar(){
    }             // Here we have created the default constructor
    tejeshwar (string x,int y)
    {
        // here we created the parameterized cinstructor ....
        name = x;
        id = y;
    }
    void printworkers()
    // Here we ahve created the function for printing the value of the class objects...
    {
        cout<<id<<" => "<<name<<endl;
    }
};
int main()
{
    tejeshwar tejesh[4];
    tejesh[0] = tejeshwar("Tejeshwar",2112046);
    tejesh[1] = tejeshwar("Ashiq",2112047);
    tejesh[2] = tejeshwar("Abhiverman",2112048);
    tejesh[3] = tejeshwar("Rajesh",2112081);
    for(int i=0;i<4;i++)
    {
        tejesh[i].printworkers();
    }

}