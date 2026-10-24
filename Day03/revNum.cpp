#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int revNum = 0;

    while(n>0)
    {
        int last = n%10;
        n = n/10;
        revNum = (revNum*10)+last;
    }
    cout << revNum << endl;
}