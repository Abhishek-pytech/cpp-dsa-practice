#include<bits/stdc++.h>
using namespace std;

int roted_string(){
    string s = "abcde";
    string goal = "cdeab";

    int n = s.size();

    string left = "";

    for(int i = 0; i < n; i++){

        string right = s.substr(i);

        if(right + left == goal){
            
            return true;
        }

        left += s[i];
    }

    return false;
}

int main(){
    cout<<roted_string();
    return 0;
}