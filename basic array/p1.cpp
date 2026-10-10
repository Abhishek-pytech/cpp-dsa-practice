#include<bits/stdc++.h>
using namespace std;
void ArrOdd(){
    int arr []= {1,3,4,6};
    for(int i=0;i<3;i++){
        if(arr[i]<=arr[i+1]){
            
        }
        else{
            cout<<"Unsorted";
            return;
        }
    
        
    }
    cout<<"Sorted";
    
    

}
int main(){
    ArrOdd();

    return 0;
}

