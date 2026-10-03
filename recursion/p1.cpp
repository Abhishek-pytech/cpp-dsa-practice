#include <bits/stdc++.h>
using namespace std;






int main() {
    string rev="";
    string name = "Abhishek";

    for (char ch : name) {
        rev = ch + rev;
    }
    cout << rev << '\n';

    return 0;
}