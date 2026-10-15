#include<bits/stdc++.h>
using namespace std;

void Pair(){
    pair<int,int>p;
    p = {1, 0};
    cout<<p.first;
}

void Vector(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);

    for(auto i:v){
        cout<<i;
    }
}

void Vector1(){
    vector<int>v(6,2);

    for(auto i:v){
        cout<<i;
    }
}


int main(){
    Vector1();

    return 0;
}