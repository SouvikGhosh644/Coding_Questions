#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{

    int pivot = arr[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quicksort(vector<int> &arr, int s, int e)
{
    //Base case
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    // your code goes here
    int n;
    cin >> n;
    vector<int> arr2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    quicksort(arr2, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    return 0;
}