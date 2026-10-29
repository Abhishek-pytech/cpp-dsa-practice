#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> str = {"flowers", "flow", "fly", "flight"};
    sort(str.begin(), str.end());
    for (const string& s : str) cout << s << " ";
    return 0;
}
