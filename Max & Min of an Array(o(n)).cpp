#include<bits/stdc++.h>
using namespace std;
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
        int max=a[0],min=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
        cout<<max<<" "<<min;
        return 0;
    }
}