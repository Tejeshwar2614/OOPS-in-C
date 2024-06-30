#include<iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    try
    {
        if(n%m!=0){
            throw n;
        }
        else {
            cout << n%m;
        }
    }
    catch (...){
        cout << "it is not divisivle by m:";
    }
}