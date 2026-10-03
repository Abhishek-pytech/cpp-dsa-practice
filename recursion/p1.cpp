#include <bits/stdc++.h>
using namespace std;

string revString() {
    string name = "Abhishek";
    string rev = "";
    for (char ch : name) {
        rev = ch + rev;
    }
    return rev;
}

int main() {
    cout << revString() << '\n';
    return 0;
    
}