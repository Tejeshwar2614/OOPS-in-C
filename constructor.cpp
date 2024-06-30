#include<iostream>
using namespace std;
// Here we have studied about the constructor in the c++ which is very important in c++...
// So we will discuss every constructor one by one ...
class professor
{
    int id; 
    string name;  
    float salary;  
    public:

    /* This is our default conctructor ...
    constructor ::: A constructor is the special member function and its name is same of that the class we have created
    ...There are three type of constructor 
    1. default constructor 
    2. parameterized constructor 
    3. copy constructor...*/
    //  1 : default constructor => It is a constructor which is automatically declare in the memory 
    //default contains zero argumentand parameter inside the paranthesis ......
    
    professor()
    {
        cout<<"the id is : "<<endl;
        cin>>id;
        cout<<"the Name is : "<<endl;
        cin>>name;
        cout<<"the salary is : "<<endl;
        cin>>salary;
    }
    private:
    // This is our private access modifier which cannot be declare outside the class 
    int person1;
    // These are the data members that we have created inside the private access modifier
    int person2;
    public:
    // This is our parameterized constrructor we have created here ...
    //parameterized constructor is the constructor which contain the parameters and arguments inside the paranthesis 
    //after calling a contructor we can use the private modifier outside the class 
    professor(int p1,int p2)
    {
        person1 = p1;
        person2 = p2;
    }
    int getp1()
    {
        return person1;
    }
    int getp2()
    {
        return person2;
    }
    void display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
    }
    // Here we can see the copy constructor 
    //copy constructure => It is a member function of the class which is initialize an object using another object of the same class .... 
    
};
int main()
{
    professor Tejeshwar;
    Tejeshwar.display();
    // here you can see the private data members are declared outside the class....
    professor singh(12,34);
    cout<<"The first person name is : "<<singh.getp1()<<endl;
    cout<<"The first person name is : "<<singh.getp2()<<endl;
}
