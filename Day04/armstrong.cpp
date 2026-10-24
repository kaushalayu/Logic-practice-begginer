#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    int original = n;
     while (n>0)
     {
        int last = n%10;
        sum = sum + (last * last * last);
        n = n/10;
     }
      if(sum == original)
      {
        cout << "armstrong" << endl;
      }
     else{
        cout << "not armstrong" << endl;
     }
     
}