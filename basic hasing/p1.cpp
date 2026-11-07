#include <bits/stdc++.h>
using namespace std;

void occurence() {

    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int target = 2;
    int n = 7;

    int fash[6] = {0};

    for(int i = 0; i < n; i++) {
        fash[arr[i]]++;
    }

    cout << "Frequency of " << target
         << " = " << fash[target];
}

int main() {
    occurence();
    return 0;
}