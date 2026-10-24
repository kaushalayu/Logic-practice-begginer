#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int duplicate = n;
    int revNum = 0;

    while(n>0)
    {
        int last = n%10;
        revNum = (revNum*10)+last;
        n = n/10;
    }

    if(revNum == duplicate)
    {
        cout << "true" << endl;
    }
     else 
     {
        cout << "false" << endl;
     }
}