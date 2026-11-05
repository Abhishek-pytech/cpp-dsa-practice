#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 6, 5, 6, 9, 6};
    
    string rev="";
    for (auto i: arr){
        rev=to_string(i)+rev;
    }
    cout<<rev;
    return 0;
}