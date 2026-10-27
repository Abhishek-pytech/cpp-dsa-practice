#include <bits/stdc++.h>
using namespace std;

int seclargest() {
    int nums[6] = {1, 2, 4, 6, 3, 7};
    int n = 6;
    sort(nums, nums + n);
    int res= nums[n - 2]+nums[n-1];
    return res;
}

int rotedarr(){
    int nums[6] = {1, 2, 4, 6, 3, 7};
    int tem = nums[0];
    int n = sizeof(nums) / sizeof(nums[0]);
    for (int i = 1; i < n; i++) {
        nums[i - 1] = nums[i];
    }

    nums[n - 1] = tem;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

int Lroted_kplace() {
    int nums[6] = {1, 2, 4, 6, 3, 7};
    int n=6;
    
    int k = 3;
    k = k % n;
    int temp[k];
    for (int i = 0; i<k; i++) {
        temp[i]=nums[i];
    }
    
    for(int i=k;i<n;i++){
        nums[i-k]=nums[i];
    }

    // int j=0;
    // for(int i=n-k;i<n;i++){
    //     nums[i]=temp[j];
    //     j++;
    // }

    for(int i=n-k;i<n;i++){
        nums[i]=temp[i-(n-k)];
    }


    for(int i=0;i<n;i++){
        cout<<nums[i];
    }

    
}

void palindrom(){
    string s = "121";
    string str="";
    for(int i=0;i<s.size();i++){
        str=s[i]+str;
    }
    if(s==str){
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palindrom"<<endl;
    }
    cout<<str;
}

int main() {
    palindrom();
    return 0;
}