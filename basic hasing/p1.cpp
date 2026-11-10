#include <bits/stdc++.h>
using namespace std;

void frequency() {

    int arr[] = {1, 3, 3,2, 2, 4, 2, 3,3};
    int hash[5]={0};
    for(int i=0;i<9;i++){
        hash[arr[i]]++;
    }

    cout<<"frequency of 2 =" <<hash[3];

    


    
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

void maxoccurence(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4};

    int max=0;
    int maxE=0;

    int hash[5]={0};
    for(int i=0;i<7;i++){
        hash[arr[i]]++;

    }
    for(int i=1;i<=4;i++){
        if(hash[i]>max){
            max=hash[i];
            maxE=i;
        }
    }

    cout<<max;



}



void character_frequency() {

    string s = "programming";
    int hash[26] = {0};

    for(auto c : s) {
        hash[c - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(hash[i] > 0) {
            cout << char(i + 'a') << " = "
                 << hash[i] << endl;
        }
    }
}

int main() {
    frequency();
    return 0;
}