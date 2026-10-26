
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ls;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            ls.push_back(i);
        }
    }

    sort(ls.begin(), ls.end());

    for(int i = 0; i < ls.size(); i++)
    {
        cout << ls[i] << " ";
    }

    return 0;
}
