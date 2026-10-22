#include<bits/stdc++.h>
using namespace std;
int findtarget(){
    int nums[6]={1,2,4,6,3,7};
    int largest=nums[0];
    int slargest=-1;
    for(int i = 0; i < 6; i++) {
            if(nums[i] <= nums[i+1]) {
                
            }
            else{
                nums[i+1]=nums[i];
            }
        }
    for(int i=6-2;i>=0;i--){
        if(nums[i]>=largest){
            slargest=largest;
            largest=nums[i];
        }
    }
     return slargest;
}
int main(){
    cout<<findtarget();
    return 0;
}