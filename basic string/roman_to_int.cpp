#include <bits/stdc++.h>
using namespace std;
int value(char c) {
    if(c == 'I') return 1;
    if(c == 'V') return 5;
    if(c == 'X') return 10;
    if(c == 'L') return 50;
    if(c == 'C') return 100;
    if(c == 'D') return 500;
    if(c == 'M') return 1000;

    return 0;
}
void roman_toint(){
    string s="MCMXCIV";
    int total=0;
    
    for(int i=0;i<s.size();i++){
        if(i + 1 < s.size() && value(s[i]) < value(s[i + 1])){
            total -= value(s[i]);
        }
        else{
            total += value(s[i]);
        }
    }
    cout<<total;
}

int main() {
    roman_toint();

    return 0;
}