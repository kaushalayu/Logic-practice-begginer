#include<iostream>
using namespace std;



int sum(int a,int b)
{
    cout << "The sum of a and b is:" << a+b << endl;
    return 0;
}

int main()
{
    int a,b;
    cin >> a >> b;
    sum(a,b);
    return 0;
}