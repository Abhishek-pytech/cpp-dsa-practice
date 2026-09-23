#include<bits/stdc++.h>
using namespace std;

//  void explainpair(){
//     pair<int,int> p={1,2};
//     cout<<p.first;

void explainpair(){
    pair<int, pair<int, int>> p = {1, {4, 2}};
    cout<<p.first<<endl<<p.second.second;

 }

void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    for(int value: v)
    cout<<value <<endl;
}

void explainVectorp(){
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    for(const pair<int, int>& value : vp)
        cout << value.first << " " << value.second << endl;
}

void explainvectorsize(){
    vector<int> v(4,20);
    vector<int>v1(v);
    for (int value : v1)
        cout << value << " ";
}

int main(){
    explainvectorsize();
   
}
