#include<bits/stdc++.h>
using namespace std;

//  void explainpair(){
//     pair<int,int> p={1,2};
//     cout<<p.first;

void explainpair(){
    pair<int, pair<int, int>> p = {1, {4, 2}};
    cout<<p.first<<endl<<p.second.second;



 }
int main(){
    explainpair();
   
}
