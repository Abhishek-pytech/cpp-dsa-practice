#include <bits/stdc++.h>
using namespace std;

void frequency() {

    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int hash[6]={0};
    for(int i=0;i<7;i++){
        hash[arr[i]]++;
    }

    cout<<"frequency of 2 =" <<hash[2];

    


    
}

int main() {
    frequency();
    return 0;
}