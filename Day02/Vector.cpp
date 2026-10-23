#include<iostream>
#include<vector>
using namespace std;

int main()
{
 
    // vector<int> v = {10,20,30};
    // v.push_back(12);
    // v.emplace_back(2);

    // cout << v[4] << endl;

    vector<int> v(5,100);

    // for(auto it = v.begin(); it != v.end();
    // it++)
    // {
    // cout << *(it) << " " << endl;
    // }

    v.erase(v.begin() + 1);
      for(auto it = v.begin(); it != v.end();
    it++)
    {
    cout << *(it) << " " << endl;
    }

    

}
