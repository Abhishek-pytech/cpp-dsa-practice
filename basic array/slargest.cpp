#include<bits/stdc++.h>
using namespace std;

void seclargest(){

    int arr[6]={1,4,3,2};
    int largest = arr[0];
    int secondLargest = INT_MIN;

    sort(arr, arr+6);
    cout<<arr[6-2];
}
int main(){
    seclargest();
    return 0;
}