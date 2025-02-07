#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to compute the sum of the difference sequence
int computeDifferenceSum(const vector<int>& arr) {
    int sum = 0;
    for (size_t i = 1; i < arr.size(); i++) {
        sum += arr[i] - arr[i - 1]; // Compute the difference sequence sum
    }
    return sum;
}

int getMaxSum(vector<int> arr) {
    if (arr.size() == 1) {
        return arr[0]; // If only one element, return it directly
    }

    int original_sum = accumulate(arr.begin(), arr.end(), 0); // Compute original sum

    // Compute sum of the difference sequence
    int diff_sum = computeDifferenceSum(arr);

    // Reverse array and compute sum of the difference sequence again
    reverse(arr.begin(), arr.end());
    int rev_diff_sum = computeDifferenceSum(arr);

    // Return the maximum of the three computed sums
    return max({original_sum, diff_sum, rev_diff_sum});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // Fast input

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of sequence
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read sequence
        }

        cout << getMaxSum(a) << "\n"; // Compute and print the maximum sum
    }

    return 0;
}
