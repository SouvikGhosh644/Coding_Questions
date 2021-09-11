//merge array and print it reverse//

#include<bits/stdc++.h>
using namespace std;

void input1(int *a,int m)
{
    cout<<"Enter the elements of array1=";
    for(int i=0;i<m;i++)
    cin>>a[i];
}

void input2(int *b,int n)
{
    cout<<"Enter the elements of array2=";
    for(int i=0;i<n;i++)
    cin>>b[i];
}


void merge(int *a,int *b,int *c,int m,int n,int p)
{
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    int j=0;
    for(int i=m;i<p;i++)
    {
        c[i]=b[j];
        j++;
    }
    cout<<"Merge Array =";
    for(int i=0;i<p;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse of the merge array =";
    for(int i=p-1;i>=0;i--)
    {
        cout<<c[i]<<" ";
    }
}


int main()
{
    int m,n,p;
    cout<<"Enter the no of elements of array1=";
    cin>>m;
    cout<<"Enter the no elements of the array2=";
    cin>>n;
    p=m+n;
    int *a=(int *)malloc(sizeof(int)*m);
    int *b=(int *)malloc(sizeof(int)*n);
    int *c=(int *)malloc(sizeof(int)*p);
    input1(a,m);
    input2(b,n);
    merge(a,b,c,m,n,p);
}
