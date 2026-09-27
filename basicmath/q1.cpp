#include<bits/stdc++.h>
using namespace std;
void odddigit(int n){

    int count=0;
    while(n>0){
        int ls=n%10;
        n/=10;
        if(ls%2!=0){
            count+=1;
        }
        
        
    }
    cout<<count; 
}

void factprint(int n){

    int fact=1;
    for(int i=1; i<=n;i++){
        fact*=i;

    }
    cout<<fact;
    

    



}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    factprint(n);
    return 0;
}