#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [5]= {2,6,5,8,11};
    int tar=14;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            if(arr[i]+arr[j]==tar){
                cout << i << ", " << j<<"\n";
                break;
            }
        }
        
        

    
        
        



    }
    
    
    
}