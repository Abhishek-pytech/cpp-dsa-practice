#include <bits/stdc++.h>
using namespace std;
void Array(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i:arr){
        sum+=i;

    }
    cout<<sum;
}
int main() {
    Array();

    return 0;
}