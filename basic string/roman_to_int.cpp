#include <bits/stdc++.h>
using namespace std;
void roman_toint(){
    string s="MCMXCIV";
    int total=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>s[i+1]){
            total+=s[i];

        }
        else{
            total-=s[i];
        }
    }
    cout<<total;
}

int main() {
    roman_toint();

    return 0;
}