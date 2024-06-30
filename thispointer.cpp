#include <iostream>
using namespace std;
// today we are going to studied abou the topic thid pointer in c++....
//this pointer is used to ==> 
// 1. It is used to pass the current object as a parameter using another function .....
// 2. It is used to refer current class instance variable .....
// 2. It is used to declare indexers....

// Lets take a example for this pointer which we are going to used in the class....

class tejeshwar
{
    public:
    string health ;
    int level;
    float life;
    tejeshwar(){
    }
    tejeshwar (string health,int level,int life)
    {
        this -> health = health;
        this -> level = level;
        this -> life = life;
    }
    string sethealth (string h)
    {
        health = h;
    }
    int setlevel(int l)
    {
        level = l;
    }
    float setlife(float f)
    {
        life = f;
    }
    string gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    int getlife()
    {
        return life;
    }
};
int main ()
{
    string s;
    int n;
    float m;
    cin >> s;
    tejeshwar tejesh(s,n,m);
    cout<<"This is the pointer value : "<<tejesh.gethealth()<<endl;
}