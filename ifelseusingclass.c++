#include<iostream>
using namespace std;
class tejesh
{
    public:
    int b,n,m;
    int setvalue(int d,int g,int s)
    {
        b=d;
        n=g;
        m=s;
    }
};
int main()
{
    tejesh jatt;
    jatt.setvalue(12,23,43);
    if(jatt.b>jatt.n){
        cout<<"the Greater value is =="<<jatt.b<<endl;
    }
    else {
        cout<<"the greater value is == "<<jatt.b<<endl;    
        }
}