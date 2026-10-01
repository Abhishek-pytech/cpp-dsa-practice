#include<bits/stdc++.h>
using namespace std;

void f( int n, int i) {
    if (n<1) return;
    cout << n;
    f(n-1,i);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    f(n,1);
    

}