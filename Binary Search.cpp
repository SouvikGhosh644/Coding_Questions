//Binary Search//

#include<bits/stdc++.h>
using namespace std;

int binary_search(int *a,int n,int k)
{
    int startpoint=0,endpoint=n-1;
    int mid=startpoint+((endpoint-startpoint)/2);
    while(startpoint<endpoint)
    {
        if(a[mid]==k)
        return mid;
        else if(k>a[mid])
        startpoint=mid+1;
        else
        endpoint=mid-1;
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    int *a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result=binary_search(a,n,k);
    cout<<result;
    return 0;
}