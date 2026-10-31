#include<bits/stdc++.h>
using namespace std;

void roted_string(){
    string s = "abcde";
    string goal = "cdeab";

    int n = s.size();

    string left = "";

    for(int i = 0; i < n; i++){

        string right = s.substr(i);

        if(right + left == goal){
            cout << "yes";
            return;
        }

        left += s[i];
    }

    cout << "no";
}

int main(){
    roted_string();
    return 0;
}