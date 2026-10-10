#include<bits/stdc++.h>
using namespace std;

void ArrOdd(){
    int arr[] = {1, 3, 9, 6};

    for(int i = 1; i < 4; i++){
        if(arr[i] < arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
    }

    for(int i : arr){
        cout << i << " ";
    }
}

int main(){
    ArrOdd();
    return 0;
}