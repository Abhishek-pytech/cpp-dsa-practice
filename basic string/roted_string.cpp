#include<bits/stdc++.h>
using namespace std;

void roted_string(){
    string s = "abcde" ;
    string goal = "cdeab";
    
    int n=s.size();

    for(int i=0;i<n;i++){
        string right= s.substr(i);
        string left="";
        if(right + left==goal){
            cout<<s;
        
            
        }
        left+=s[i];
    }
    
    
}
int main(){
    roted_string();
    return 0;
}
