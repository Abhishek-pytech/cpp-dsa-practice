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
void union_of_2arr(){
    int arr1[]={1,4,7,1,4,9,6};
    int arr2[]={3,9,6,4,2};

    set<int> result;
    for (int num : arr1)
    result.insert(num);
    for (int num : arr2) 
    result.insert(num);

    for (int num : result) cout << num << " ";
}
void intersection_of2arr(){
    int arr1[]={1,4,7,1,4};
    int arr2[]={3,9,6,4,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    vector<int>ans;

    vector<int>vis(n2,0);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j] && vis[j]==0){
                ans.push_back(arr2[j]);
                vis[j]=1;
                break;
            }
            else if(arr2[j]>arr1[i]){
                break;

            }
        }
    }
    for(auto num:ans){
        cout<<num<< " ";
    }
    
}

void majorityofelement(){
    int arr[]={7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>(n/2)){
            cout<< arr[i];
        }
    }
    
    
}
void Leaders (){
    int arr[]={9,8,6,1, 2, 5, 3, 1, 2};
    vector<int>ans;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    leader=false;
                    break;
                }
        }
        if(leader==true){
            ans.push_back(arr[i]);

        }
    }
    for(auto num: ans){
        cout<<num<< " ";
    }
}

int main(){
    
    Leaders ();
    return 0;
}