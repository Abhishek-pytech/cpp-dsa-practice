#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 6, 5, 6, 9, 6};
    int hashTable[10] = {0};
    for(int i = 0; i < 6; i++) {
        hashTable[arr[i]]++;
    }
    cout << hashTable[6] << endl;  // Output: 3
    return 0;
}