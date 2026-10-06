#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int num[n];

    cout << "Enter " << n << " elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cout << "Array elements:\n";

    for(int j : num) {
        cout << j << "\n";
    }

    return 0;
}