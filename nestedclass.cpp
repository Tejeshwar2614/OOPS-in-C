#include <iostream>
using namespace std;

// Now we are going to studied about the topic "nested class " 
// the class we are creating inside the another class in called as the nested class ....
class tejeshwar // This is our first class ..
{
    public:
    class singh // This is our nested class 
    {
        public:
        // here we ahve created the data member of the class singh
        int regno;
        char section;
        float cgpa;
        // Here we have created the member function of the class singh.....
        int setregno(int r)
        {
            regno = r;
        }
        char setsection(char s)
        {
            section = s;
        }
        float setcgpa(float c)
        {
            cgpa = c;
        }
        int getregno()
        {
            cout<<"the Tejeshwar singh registration number is : "<<regno<<endl;
            return regno;
        }
        char getsection()
        {
            cout <<"The section of the tejeshwar singh is : "<<section<<endl;
            return section;
        }
        float getcgpa()
        {
            cout<<"The cgpa of the tejeshwar singh in first year is : "<<cgpa<<endl;
            return cgpa;
        }
        // Here we have created the data member of the class tejeshwar ......
        public:
        int dob;
        // This thee member function 
        int setdob(int d)
        {
            dob = d;
        }
        int getdob()
        {
            cout<<"The date of birth of the tejeshwar singh is : "<<dob<<endl;
            return dob; 
        }
    };
};
int main()
{
    // Here we are creating the object for the both classes "tejeshwar" and "singh"
    tejeshwar :: singh gun;
    // here we are calling the funcitons that we have created in the class ......
    gun.setregno(2112046);
    gun.setsection('A');
    gun.setcgpa(8.00); // this is the function calling for the first class 
    gun.setdob(2612004);
    gun.getregno();
    gun.getsection();
    gun.getcgpa();
    gun.getdob();
}
