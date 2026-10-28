#include<bits/stdc++.h>
using namespace std;



void backPrint(int i,int n)
{
    if(i>1) return;
    backPrint(i-1,n);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    backPrint(n,n);
}