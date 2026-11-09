#include <bits/stdc++.h>
using namespace std;

void frequency() {

    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int hash[6]={0};
    for(int i=0;i<7;i++){
        hash[arr[i]]++;
    }

    cout<<"frequency of 2 =" <<hash[2];

    


    
}
void everyelemt(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4};

    int hash[5]={0};

    for(int i=0;i<7;i++){
        hash[arr[i]]+=1;
    }

    cout<<" 1 occure" <<":"<<hash[1]<<endl;
    cout<<" 2 occure" <<":"<<hash[2]<<endl;
    cout<<" 3 occure" <<":"<<hash[3]<<endl;
    cout<<" 4 occure" <<":"<<hash[4]<<endl;
}
int main() {
    everyelemt();
    return 0;
}