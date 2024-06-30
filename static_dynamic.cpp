/*#include<iostream>
using namespace std;

int getsum(int *arr,int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum ; 
}

int get2Darray(int **array,int b)
{
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char ch;
    int n;

    // size of the type char , int .....

    cout << sizeof(ch) << endl;
    cout << sizeof(n) << endl;

    // pointer value

    char *c = &ch;
    int *v = &n;

    // size of the pointer type ......

    cout << sizeof(c) << endl;
    cout << sizeof(v) << endl;
    int n;
    cin >> n;
    int *arr = new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << endl;
    }
    cout << "\n";
    int ans = getsum(arr,n);
    cout << "the sum of the array is : " << ans << endl;
    int b;
    cin >> b;
    int **array = new int *[b];
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin >> array[i][j];
        }
    }
    get2Darray(array,b);
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int*[n];


    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // If we want to release the memory from the heap so we will do something like that ......

    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;*/

#include <iostream>
#include<cmath>
using namespace std;

class matrix
{
    public:
    int n,m;
    int b[100][100];
    matrix(int n,int m)
    {
        this -> n = n;
        this -> m = m;
    }
    void read_matrix();
    void print_matrix();
    void determinant();
    void transpose();
};
void matrix :: read_matrix()
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> b[i][j];
        }
    }
}
void matrix :: print_matrix()
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << b[i][j] << " " ;
        }
        cout << "\n";
    }
}
void matrix :: determinant()
{
    int i,j=1;
    int k=2;
    int d=0;
    for(i=0;i<n;i++){
        int p = pow(-1,i);
        if(i==2){
            k=1;
        }
        d = d+(b[0][i]*(b[1][j]*b[2][k] - b[2][j]*b[1][k]))*p;
        j=0;
    }
    cout << d ;
}
int main()
{
    int n,m;
    cin >> n>> m;
    matrix l(n,m);
    l.read_matrix();
    l.print_matrix();
}