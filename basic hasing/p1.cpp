
#include <bits/stdc++.h>
using namespace std;

void frequency() {

    int arr[] = {2, 4, 2, 5, 4, 2, 6, 5, 4, 6};

    int n = 10;
    int hash[7] = {0};

    // Count frequency
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Print frequency
    for(int j = 1; j < 7; j++) {
        if(hash[j] > 0) {
            cout << "Frequency of " << j
                 << " = " << hash[j] << endl;
        }
    }
}

int main() {
    frequency();
    return 0;
}
