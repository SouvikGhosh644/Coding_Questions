#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

void move_neg_val(int *a,int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            if (i!=j)
                swap(a[i],a[j]);
            j++;
        }
    }
    for (int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";    
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,*a;
       cin>>n;
       a=(int*)malloc(sizeof(int)*n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       move_neg_val(a,n);
       return 0;
   }
}