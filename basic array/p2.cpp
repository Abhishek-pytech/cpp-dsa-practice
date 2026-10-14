#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int largest=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        
    }
    cout<<"The largest number is "<<largest<<endl;
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest and arr[i]!=largest){
            slargest=arr[i];

        }
    }
    cout<<"The second largest number is: "<<slargest;
    return 0;
}