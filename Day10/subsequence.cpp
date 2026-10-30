
#include<bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &ds, int arr[], int n)
{
    if(ind == n)
    {
        for(auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    // Pick the element
    ds.push_back(arr[ind]);
    print(ind + 1, ds, arr, n);

    // Backtrack
    ds.pop_back();

    // Do not pick the element
    print(ind + 1, ds, arr, n);
}

int main()
{
    int arr[] = {3, 2, 1};
    int n = 3;

    vector<int> ds;

    print(0, ds, arr, n);

    return 0;
}
