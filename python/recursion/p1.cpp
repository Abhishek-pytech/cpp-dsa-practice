#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void f(){
    if(cnt==9){
        return ;

    }
    else{
        cout<<cnt;
        cnt++;
    }
    f();
    
}


int main(){
    f();
    return 0;
}