#include <bits/stdc++.h>
using namespace std;

int seclargest() {
    int nums[6] = {1, 2, 4, 6, 3, 7};
    int n = 6;
    sort(nums, nums + n);
    return nums[n - 2];
}

int main() {
    cout << seclargest() << endl;
    return 0;
}