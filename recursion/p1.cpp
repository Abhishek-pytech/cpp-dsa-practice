#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
        int left = 0;
        int right = (int)s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
}

int main() {
     reverseString() ;
    return 0;
    
}