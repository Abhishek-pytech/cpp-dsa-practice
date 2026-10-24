#include<bits/stdc++.h>
using namespace std;

void seclargest(){
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){


        }
        else if(arr[i]<=arr[i-1]){
            arr[i]=arr[i-i];
        }
    }

    for(int i=0; i<n;i++){
        cout<<arr[i];
    }


}
int main(){
    seclargest();
    return 0;
}