#include<bits/stdc++.h>
using namespace std;

void MoveAll_zeroEnd(){
    int arr[]={0, 1, 4, 0, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for(int i=0;i<nz;i++){
        arr[i]=temp[i];

    }

    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
    for(auto num:arr){
        cout<< num<< " ";
    }
}

int main(){
    MoveAll_zeroEnd();
    return 0;
}