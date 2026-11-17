#include<bits/stdc++.h>
using namespace std;

void selection_sort(){
    int arr[] = {5, 3, 8, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans;

    for(int i=0;i<=n-2;i++){
        int min_index=i;

        for(int j=i;j<n;j++){
            if(arr[j]< arr[min_index])
            min_index=j;

        }
        swap(arr[min_index], arr[i]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    
     
}
int main(){
    selection_sort();
    return 0;
}