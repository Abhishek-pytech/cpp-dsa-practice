#include<bits/stdc++.h>
using namespace std;
int n=5;
void f(){
    if(n == 0)
        return;
    

    cout << n;
    n--;

    f();
}

int main(){
    

    f();
    return 0;
}