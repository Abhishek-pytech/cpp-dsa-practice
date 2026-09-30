#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void f(long long n){
    
    if(n==0) {
        return;
    }
    
    n/=10;
    cnt+=1;
    
    f(n);
    


}

int main(){
    long long n;
    cout<<"Enter a number : ";
    cin>>n;
    f(n);
    cout<<cnt <<endl;

}