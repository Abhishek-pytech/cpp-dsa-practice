#include<bits/stdc++.h>
using namespace std;
void ArrOdd(){
    int arr []= {1,3,9,7,6,4,5};
    for(int i=0;i<6;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }
    
        
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    

}
int main(){
    ArrOdd();

    return 0;
}

