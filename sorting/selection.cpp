#include<bits/stdc++.h>
using namespace std;

void selection_sort(){
    
    int arr[] = {12, 5, 8, 3, 15, 1};
    int n=sizeof(arr)/ sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        int min_index=i;

        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
            swap(arr[i],arr[min_index]);
        }

        
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    

    
     
}
int main(){
    selection_sort();
    return 0;
}