#include<bits/stdc++.h>
using namespace std;
int sum=0;
void f(int i,int n){
    
    if(i>n) {
        return;
    }
    
    sum+=i;
    
    f(i+1,n);
    


}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    f(1,n);
    cout<<sum <<endl;

}