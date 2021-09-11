#include<bits/stdc++.h>
using namespace std;

void input(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];
}

int min(int *a,int n)
{
    int small=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        small=a[i];;
    }
    return small;
}
int main()
{
    int n;
    cin>>n;
    int *a=(int *)malloc(sizeof(int)*n);
    input(a,n);
    int Min=min(a,n);
    cout<<Min<<endl;
}