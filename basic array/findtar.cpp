#include<bits/stdc++.h>
using namespace std;
int findtarget(){
    int nums[6]={1,2,4,6,3,7};
    int target=8;
    for(int i=0;i<6;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    cout<<findtarget();
    return 0;
}