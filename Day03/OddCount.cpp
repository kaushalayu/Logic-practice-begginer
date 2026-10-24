#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    
    if(n == 0){
    cout << 0 << endl;
    return 0;
    }

    while(n>0)
    {
        int last = n%10;
        if(last%2!=0)
        {
            count++;
        }
        n = n/10;

    }
    cout << count << endl;
    return 0;
}
