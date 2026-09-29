#include<bits/stdc++.h>
using namespace std;
int n=1;
void f(){
    if(n == 6)
        return;
    

    cout << n;
    n++;

    f();
}

int main(){
    

    f();
    return 0;
}