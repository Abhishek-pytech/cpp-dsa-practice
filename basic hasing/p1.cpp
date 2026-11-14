#include <bits/stdc++.h>
using namespace std;

void frequency(){
    int arr[]={1, 2, 3, 2, 4, 2, 5};
    int  hash[6]={0};

    for(int i=0;i<7;i++){
        hash[arr[i]]++;
    }

    for(int j=1;j<6;j++){
        cout<<hash[j]<<endl;
    }

    
}

int main() {
    frequency();
    
    return 0;
}