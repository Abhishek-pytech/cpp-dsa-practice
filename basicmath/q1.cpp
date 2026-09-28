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
    cout<<fact<<"\n";
}

void amstrong(int n){
    int original = n;
    int sum=0;
    while(n>0){
        int ls=n%10;
        n/=10;
        ls = ls * ls * ls;
        sum += ls;
    }

    if(sum == original){
        cout << "Armstrong number\n";
    } else {
        cout << "Not an Armstrong number\n";
    }
}

bool perfectnumber(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
        
    }
    // cout<<sum;
    if(sum==n){
        return true;
    }
    return false;

}









int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    perfectnumber(n);
    return 0;
}