#include<iostream>
using namespace std;

int main()
{
    pair<int,int> p = {1,2};

    cout << p.first << endl;


    pair<int,pair<int,int>> pp = {1,{2,3}};
    cout << pp.second.first << endl;
}
