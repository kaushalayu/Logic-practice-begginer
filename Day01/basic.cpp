#include<iostream>
using namespace std;

int main()
{
    string s;
    /* cin >> s;  problem is when we give two input words
     it will print first only so to print all words we need getline*/
     getline(cin,s);
    cout << s << endl;
    return 0;
}