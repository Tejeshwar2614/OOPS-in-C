#include <iostream>
using namespace std;
//today we are going to studied about friend function ....
//friend function can be used outside the class 
// friend function may be the member of the other class ...........
// friend function may be the global variable.......
class don
{
    int area;
    public:
    friend void my_area(don Don);  // here we have created the friend fnuction and we have have created the object also
    void  setarea(int A)  // Here we have created the normal function 
    {
        area = A;
    }
};
void my_area(don Don)// We have call the function outside the class without using any scope resolution operator..
{
    cout<<"The area of the don is : "<<Don.area<<endl;
}
int main()
{
    don Don;
    Don.setarea(123);// Here we are printing the value of the area of the don
    my_area(Don);
    don tejes ;
    tejes.setarea(234);
    my_area(tejes);
}
