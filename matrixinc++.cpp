#include<iostream>
using namespace std;


class matrix 
{
    public:
    int n;
    int m;
    int b[100][100];
    int a[100][100];
    void Matrix_input();
    void printmatrix();
    void sum_of_two_matrix();
};
void matrix :: Matrix_input()
{
    cout << "enter the row and the column value" ;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
}
void matrix :: printmatrix()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
void matrix :: sum_of_two_matrix()
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << b[i][j]+a[i][j] <<  " ";
        }
        cout << "\n";
    }
}
int main()
{
    matrix obj;
    obj.Matrix_input();
    obj.printmatrix();
    obj.sum_of_two_matrix();
    system("pause");

}