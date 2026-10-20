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

    
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            
        }
        else{
            cout<<"The arr is Unsorted";
            return;
        }
    
        
    }
    cout<<"The arr is Sorted";
    
    

}
int main(){
    ArrOdd();

    return 0;
}

