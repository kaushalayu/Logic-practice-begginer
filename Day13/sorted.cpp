#include<bits/stdc++.h>
using namespace std;

int sorted(int i,vector<int> &arr)
{
    if(arr[i] > arr[i+1]) return false;
    return sorted(i+1,arr);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
   cout <<  sorted(0,arr) << " ";
   
}