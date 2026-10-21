#include<bits/stdc++.h>
using namespace std;
int findtarget(){
    int nums[6]={1,2,4,6,3,7};
    int target=7;
    for(int i=0;i<6;i++){
        if(nums[i]==target){
            cout<< i;
            break;
        }
    }
    cout<<-1;
}
int main(){
    findtarget();
    return 0;
}