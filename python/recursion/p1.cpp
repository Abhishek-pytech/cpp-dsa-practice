#include<bits/stdc++.h>
using namespace std;

void f(int n,int  i){
    if(i>n) return;

    cout<<n;
    f(n-1,i);
    
    
}

int main(){
    int n;
    cout<<"Enter  number: ";
    cin >> n;

    f(n,1);
    return 0;
}