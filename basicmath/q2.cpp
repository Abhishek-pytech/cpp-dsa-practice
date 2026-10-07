#include <bits/stdc++.h>
using namespace std;
void Array(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i:arr){
        cout<<i;

    }
    
}
int main() {
    Array();

    return 0;
}