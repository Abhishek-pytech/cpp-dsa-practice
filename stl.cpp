#include<bits/stdc++.h>
using namespace std;
int sum(int n1, int n2){
    return n1+n2;
}
int main(){
    int n1,n2;
    cout<< "Enter your first number : ";
    cin >> n1;
    cout<<"Enter your second number: ";
    cin>>n2;
    cout << sum(n1, n2);
    return 0;
}
