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

void prime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        
        if(n%i==0){
            cnt++;
        }
    
    }
    if(cnt==2){
        cout<<"yes";

    }
    else{
        cout<<"no";
    }
}


bool prime2(int n){
   
int count = 0;

        for (int i = 2; i <= n; i++) {

            int divisor = 0;

            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    divisor++;
                }
            }

            if (divisor == 2) {
                count++;
            }
        }

        return count;

}

void Divisors(int n){
    vector<int>v;

    for(int i=1;i<=n;i++){

        if(n%i==0){
            v.push_back(i);
        }





    }
    for (int divisor : v) {
        cout << divisor << ' ';
    }
}






int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Divisors(n);
    return 0;
}