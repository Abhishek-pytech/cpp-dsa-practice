
#include <bits/stdc++.h>
using namespace std;

void frequency() {

    int arr[] = {1, 3, 2, 3, 4, 3, 5, 2, 3, 1};

    int n = 10;
    int hash[6] = {0};

    // Count frequency
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Print frequency
    cout << "Frequency of 3 :" << hash[3] << endl;
}


void maximum_frequency(){
    int arr[]={1, 2, 3, 2, 4, 3, 3, 5, 2, 2};

    int hash[6]={0};
    for(int i=0; i<10;i++){
        hash[arr[i]]++;
    }

    int max=0;
    int el=0;

    for(int j=1;j<=5;j++){
        if(hash[j]>max){
            max=hash[j];
            el=j;
        }

    }

    cout<<"max freqency:"<<max<<endl;
    cout<<el;

}

int main() {
    maximum_frequency();
    return 0;
}
