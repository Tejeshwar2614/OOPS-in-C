#include <iostream>
using namespace std;

// Now we are going to studied about the "local class "
// The class which is declaring inside the function is called as the locl class in c++ OOPS .....
void function()
// Here we have created a function with data type void .........
{
    class tejesh
    // Here inside the function we have created the class with name tejesh 
    {
        public:
        int gradeA;
        char rank;
        int marks;
        // Here we have created the get/set function .....
        int setgradeA(int g)
        {
            gradeA = g;
        }
        char setrank(int r)
        {
            rank = r;
        }
        int setmarks(int m)
        {
            marks = m;
        }
        int getgradeA()
        {
            cout<<" the grade of the tejeshwar is : "<<gradeA<<endl;
        }
        char getrank()
        {
            cout <<"The rank of the tejeshwar singh is : "<<rank<<endl;
        }
        int getmarks()
        {
            cout<<"The total marks of the tejeshwar singh is : "<<marks<<endl;
        }
    };
    tejesh tej;  // Here we have created the object of the class with name tej.....
    tej.setgradeA(22);
    tej.setrank('A');
    tej.setmarks(1234);
    tej.getgradeA();
    tej.getrank();
    tej.getmarks();
}
int main()
{
    function();
}