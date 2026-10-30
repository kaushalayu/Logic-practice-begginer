
#include<bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &ds, int arr[], int n, int sum, int k)
{
    // Base case
    if(ind == n)
    {
        if(sum == k)
        {
            for(auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // Pick the element
    ds.push_back(arr[ind]);
    sum += arr[ind];

    print(ind + 1, ds, arr, n, sum, k);

    // Backtrack
    sum -= arr[ind];
    ds.pop_back();

    // Do not pick the element
    print(ind + 1, ds, arr, n, sum, k);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int k = 2;

    vector<int> ds;

    print(0, ds, arr, n, 0, k);

    return 0;
}
