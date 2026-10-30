#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[] = {"flowers", "flow", "fly", "flight","car"};
    sort(str, str + 5);
    for (const string& s : str) cout << s << " ";
    return 0;
}
