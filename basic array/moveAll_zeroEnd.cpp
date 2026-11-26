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

void removeDublicate(){
    int arr[]={0, 0, 3, 3, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int cnt=0;
    for(int num : st){
        cout << num << " ";
        cnt++;
    }
    cout<<cnt;
}
void Removedubli(){
    int arr[]={0,0,3,5,6};
    vector<int>temp;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
                temp.push_back(arr[j]);
            }
            else if(arr[i]==arr[j]){
                temp.push_back(arr[j]);
            }
        }
    }
    int cnt=0;
    for(auto it:temp){
        cnt++;
    }
    cout<<cnt;
}

int main(){
    
    Removedubli();
    return 0;
}