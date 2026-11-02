#include <bits/stdc++.h>
using namespace std;

int main() {
    string res = "";
    string s = "(())((()))";

    int balance = 0;

    for (char c : s) {

        if (c == '(') {

            if (balance > 0)
                res += c;

            balance++;

        } else {

            balance--;

            if (balance > 0)
                res += c;
        }
    }

    cout << res;

    return 0;
}