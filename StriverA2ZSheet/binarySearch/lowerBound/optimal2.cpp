#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;       // candidate
            high = mid - 1;  // try to find smaller index
        } else {
            low = mid + 1;   // move right
        }
    }
    return ans; // n if no element >= x
}

int main() {
    vector<int> arr = {1, 2, 4, 6};
    int x = 0;
    cout << lowerBound(arr, x) << endl; // Output: 0 (first element ≥ 0)
}
