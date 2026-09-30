#include<bits/stdc++.h>
using namespace std;
int rev=0;
void f(int  n){
    
    if(n==0) {
        return;
    }
    int ls=n%10;
    n/=10;
    rev=rev*10+ls;
    f(n);

}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    f(n);
    if (n==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    cout<<endl;

}