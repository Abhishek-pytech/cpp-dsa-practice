#include<bits/stdc++.h>
using namespace std;
void ArrOdd(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i: arr){
    //     cout<<i;
    // }
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            
        }
        else{
            cout<<"Unsorted";
            return;
        }
    
        
    }
    cout<<"Sorted";
    
    

}
int main(){
    ArrOdd();

    return 0;
}

