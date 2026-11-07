#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "aba";

    int ans = 0;
    int n = s.size();

    for(int i = 0; i < n; i++) {

        int freq[10] = {0};

        for(int j = i; j < n; j++) {

            // Include current character
            freq[s[j] - 'a']++;

            int odd = 0;

            // Count characters having odd frequency
            for(int k = 0; k < 10; k++) {

                if(freq[k] % 2 != 0) {
                    odd++;
                }

            }

            // At most one odd frequency
            if(odd <= 1) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}