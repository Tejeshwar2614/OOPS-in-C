#include<iostream>
using namespace std;
// Today we are going to study about array in c++ 
// Here we have created the one dimensional array .....
int main()
{
    /*int n,arr[100];
    cin>>n;
    int i;
    // Here we are reading the one dimensional array ....
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The element in the array is: ";
    // Here we are printing the one dimensional array....
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // Here we have created the two dimwnsional array .....
    int b,m ;
    cin>>b>>m;
    int twodarr[100][100];
    int g,j;
    // Here we are reading the two dimensional array...
    for(g=0;g<b;g++)
    {
        for(j=0;j<m;j++)
        {
            cin>>twodarr[g][j];
        }
    }
    cout<<"The element in the two dimension array are : "<<endl;
    // Here we are printing the two dimensional array....
    for(g=0;g<b;g++)
    {
        for(j=0;j<m;j++)
        {
            cout<<twodarr[g][j]<<" ";
        }
        cout<<"\n";
    }*/
    string b,n;
    cin >> b >> n;
    int count=0;
    int l = b.size();
    int l1 =n.size();
    int i,j;
    for (i=0;i<l-2;i++)
    {
        for(j=0;j<l1-1;j++)
        {       
            if(b[i]==n[j]){
                count++;
            }
        }
    }
    cout << count;
} 
