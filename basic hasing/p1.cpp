#include <bits/stdc++.h>
using namespace std;

void occurence() {

    int maxFreq = 0;
    int maxElement = 0;

    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    
    int n = 7;

    int fash[5] = {0};

    for(int i = 0; i < n; i++) {
        fash[arr[i]]++;
        
    }

    for(int i = 0; i < 5; i++) {

    if(fash[i] > maxFreq) {

        maxFreq = fash[i];
        maxElement = i;

    }
}
cout << "Maximum occurring element = " << maxElement << endl;
cout << "Frequency = " << maxFreq;

    
}

int main() {
    occurence();
    return 0;
}