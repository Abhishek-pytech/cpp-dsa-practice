#include <bits/stdc++.h>
using namespace std;

int fact = 1;

void f(int i) {
    if (i < 1) return;

    fact *= i;
    f(i - 1);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    f(n);
    cout << fact << endl;
    return 0;
}