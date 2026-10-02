#include <bits/stdc++.h>
using namespace std;

int sum = 1;

void f(int i) {
    if (i < 1) return;

    sum *= i;
    f(i - 1);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    f(n);
    cout << sum << endl;
    return 0;
}