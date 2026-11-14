
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

void Minimum_frequency(){
    int arr []= {1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5};

    int hash[6]={0};

    for(int i=0;i<11;i++){
        hash[arr[i]]++;
    }

    

    int min = INT_MAX;
    int el = -1;

    for(int j = 1; j <= 5; j++) {
        if(hash[j] > 0 && hash[j] < min) {
        min = hash[j];
        el = j;
    }
}

    cout<<min;
}


void Highest_LowestFrequency(){
    int arr[]= {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5};

    int hash[6]={0};

    for(int i=0;i<12;i++){
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


    int min = INT_MAX;
    int ell = -1;

    for(int j = 1; j <= 5; j++) {
        if(hash[j] > 0 && hash[j] < min) {
        min = hash[j];
        ell = j;
    }
}

    cout << "\nLowest frequency: " << min << endl;
    cout << "Lowest frequency element: " << ell << endl;


}


void userfrequency(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n;
    cout<<"enter a number that in arr : ";
    cin>>n;

    int hash[6]={0};

    for(int i=0;i<9;i++){
        hash[arr[i]]++;
    }

    cout<<hash[n];
}

int main() {
    userfrequency();
    return 0;
}
