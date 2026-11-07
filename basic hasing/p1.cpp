#include <bits/stdc++.h>
using namespace std;

void occurence(){
    int arr[]={1,2,1,2,4,7,4,2,};
    int n=8;

    int hash[9]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;

    }
   cout<< hash[1,2,4];
    
}

int main() {
    occurence();

    

    return 0;
}