#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to count minimal coprime segments in range [l, r]
int count_minimal_coprime(ll l, ll r) {
    int count = 0;

    for (ll x = l; x <= r; x++) {
        bool is_minimal = true;

        // Check if there exists some y in [x, r] such that gcd(x, y) == 1
        for (ll y = x; y <= r; y++) {
            if (__gcd(x, y) == 1) {
                // Check if a smaller coprime segment exists
                for (ll z = x; z < y; z++) {
                    if (__gcd(x, z) == 1) {
                        is_minimal = false; // Not minimal if a smaller segment exists
                        break;
                    }
                }
                if (is_minimal) count++; // Count minimal segment
                break; // No need to check further
            }
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_minimal_coprime(l, r) << "\n";
    }
    return 0;
}
