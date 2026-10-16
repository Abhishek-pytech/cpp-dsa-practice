#include<bits/stdc++.h>
using namespace std;
int main(){
    int n [5]= {1,2,3,4,5};
    int tar=7;
    for(int i=0;i<5;i++){
        int sum= n[i]+ n[i+1];
        if(sum==tar){
            cout<<"y";
            break;
        }



    }
    cout<<"n";
    
}