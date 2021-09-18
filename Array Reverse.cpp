//array reverse//

#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int *c;
    *c=*a;
    *a=*b;
    *b=*c;
}

void reverse(int *a,int start,int end,int n)
{
    while(start<=end)
    {
        swap(&a[start],&a[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int *a=(int *)malloc(sizeof(int)*n);
    cout<<"Enter the element of the array=";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,0,n-1,n);
    return 0;
}