#include<bits/stdc++.h>
using namespace std;

int selection_sort(){
     int n;
    cout<<"enter arr size:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
     
}
int main(){
   cout<<selection_sort();
    return 0;
}