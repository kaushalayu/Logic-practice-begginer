#include<iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    if(input >18)
    {
        cout << "he is adult" << endl;
    }
    else if(input == 18)
    {
        cout << "he is adult but 18 only" << endl;
    }
     else 
     {
        cout << "he is not adult" << endl;
     }
}