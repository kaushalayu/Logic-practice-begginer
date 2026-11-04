#include<bits/stdc++.h>
using namespace std;

void reverse(int l,int m,int n,vector<int> &arr)
{
    if(l>=m) return;
    swap(arr[l],arr[m]);
    reverse(l+1,m-1,n,arr);
}

int main()
{
      int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    reverse(0,n-1,n,arr);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}