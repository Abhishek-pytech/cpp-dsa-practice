#include<bits/stdc++.h>
using namespace std;

void MoveAll_zeroEnd(){
    int arr[]={0, 1, 4,0,0,0,0,0,0,4,7,8,9,3,4, 0, 5, 2};
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

void MoveZero(){
    int arr[]={0, 1, 4,0,0,0,4,7,8,9,3,4, 0, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }

    }
    for(auto num: arr){
        cout<< num<< " ";
    }
}

int main(){
    MoveZero();
    return 0;
}