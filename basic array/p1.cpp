#include<bits/stdc++.h>
using namespace std;
void ArrOdd(){
    int arr [5]= {1,2,3,4,5};
    int cnt=0;
    for(int i=0;i<6;i++){
        if(i%2!=0){
            cnt+=1;
        }
        
    }
    cout<<cnt;

}
int main(){
    ArrOdd();

    return 0;
}

