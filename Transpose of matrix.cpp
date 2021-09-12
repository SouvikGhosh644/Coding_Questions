//write a program to transpose 3*3 matrix//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the no of row & col of the matrix=";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the element of the matrix=";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>arr[i][j];
    }
    cout<<"Transpose of the matrix is="<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}