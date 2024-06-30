#include<iostream>
using namespace std;
/* Here we have created the class ...where class provide the simple mechanism to the program to build their own data type....It is similar
to struct with some diferences...class consist of the data member and the data function .*/ 
class superstar
{
     /*Here we have created the public whick is the access modifier int the OPPS concept ....there are three modidifier in the OOPS 
    concept 1 : public 
            2 : private
            3 : protector */ 
    public:
     /* public : public is the access modifier..if we take the any data member inside the public access modifier then we can print that 
    data menber outside the class also....*/


    int health ;  // this is our integer vaule
    char level;  // This is our character value 
    float points;  // This is our float value
    void sethealth(int h)
    {
        health = h;
    }

    // Here we are using the setter/getter..
    // setter is method whose  primarly purpose used to change the class field.. 
    // where on other hand getter mean to return the field class ..... 
    void setlevel(char l)
    {
        level = l; 
    }
    void setpoints(float p)
    {
        points = p;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    float getpoints()
    {
        return points;
    }

};
int main ()
{
    /* here we have created the object of the class superstar which is tejeshwar
    object => object is the instance of the class ....*/
    superstar tejeshwar;
    tejeshwar.sethealth(999);
    // Here we have call the function " sethealth "
    tejeshwar.setlevel('t');
    //Same like previous one here also we have call the function " setlevel "
    tejeshwar.setpoints(67.8);
    cout<<"The health is : "<<tejeshwar.gethealth()<<endl;
    //Here we have print all the values that we have declare inside the class .... 
    cout<<"The level is : "<<tejeshwar.getlevel()<<endl;
    cout<<"The points are : "<<tejeshwar.getpoints()<<endl;
}
