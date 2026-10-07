#include <bits/stdc++.h>
using namespace std;
void Array(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fact=1;
    for(int i:arr){
        fact*=i;

    }
    cout<<fact;
    
}
int main() {
    Array();

    return 0;
}