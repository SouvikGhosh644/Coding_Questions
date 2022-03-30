#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    
    int result=0;
    for(int i=1;i<n-1;i++)
    {
        int left_max=arr[i];
        for(int j=0;j<i;j++)
        {
            left_max=max(left_max,arr[j]);
        }
        
        int right_max=arr[i];
        for(int k=i+1;k<n;k++)
        {
            right_max=max(right_max,arr[k]);
        }
        
        result+=min(left_max,right_max)-arr[i];
    }
    
    cout<<result;
}