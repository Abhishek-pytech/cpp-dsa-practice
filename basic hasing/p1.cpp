#include <bits/stdc++.h>
using namespace std;

void occurence() {

    string s = "programming";
    int n=s.size();
    int hash[26]={0};

    for(int i=0;i<n;i++){
        hash[s[i] - 'a']++;
    }

    for(auto c: s){
        cout << hash[c - 'a']<<endl;

    }

    


    
}

int main() {
    occurence();
    return 0;
}