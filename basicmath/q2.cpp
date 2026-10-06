#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int car[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i <=4; i++){
        sum += car[i];
    }
    cout<<sum;

    return 0;
}