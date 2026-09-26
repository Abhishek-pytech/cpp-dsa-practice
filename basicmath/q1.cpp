#include<bits/stdc++.h>
using namespace std;

void digitproblem(int n, int cnt){

    
    
    while(n>0){
        n /= 10;
        cnt+=1;
    }
    cout<<cnt;

}

int main(){
    int cnt = 0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    

    digitproblem(n, cnt);
    return 0;
}