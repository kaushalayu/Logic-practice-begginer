
#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n)
{
    if (i > n) return;

    cout << "Ayush" << endl;
    printName(i + 1, n);
}

int main()
{
    int n;
    int i = 1;

    cin >> n;
    printName(i, n);

    return 0;
}
