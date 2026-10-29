
#include<bits/stdc++.h>
using namespace std;

void single(int i, int arr[], int n)
{
    if(i >= n/2)
    {
        return;
    }

    swap(arr[i], arr[n-i-1]);

    single(i+1, arr, n);
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    single(0, arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
