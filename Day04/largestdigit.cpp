
#include <bits/stdc++.h>
using namespace std;

int main() {
    int largest = 0;
    int n;
    cin >> n;

    while (n > 0) {
        int last = n % 10;

        if (last > largest) {
            largest = last;
        }

        n = n / 10;
    }

    cout << largest << endl;

    return 0;
}
