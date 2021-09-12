//Pascal Triangle using 2D array//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no of rows=";
    cin>>n;
    int arr[n][n];
    for (i = 0; i < n; i++)       
    {
        for (j = 0; j <= i; j++)
        {
            if(i==j || j==0)
            arr[i][j] = 1;
            else
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}