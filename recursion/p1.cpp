#include <bits/stdc++.h>
using namespace std;

string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

void f(int n) {
    cout << "n = " << n << "\n";
}

int main() {
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // f(n);

    for (string car : cars) {
        cout << car << "\n";
    }

    return 0;
}