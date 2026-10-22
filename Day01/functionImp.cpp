#include<iostream>
using namespace std;

void change(int x)
{
    x = 20;
}

/* this is pass by value in this a copy of a will be sent to change function when we alter in 
chnage no effect of iy comes in a 
If you want to make effect in voth values you have to make it pass by refrence to do so nothing changes just 
add int &x in place of int x that's it*/

int main()
{
    int a =10;

    change(a);
    cout << a;
    return 0;
}