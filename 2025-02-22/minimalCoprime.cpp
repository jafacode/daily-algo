#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long part1 = max(0LL, r - max(l, 2LL));
        bool has_one = (l <= 1 && 1 <= r);
        long long ans = part1 + (has_one ? 1 : 0);
        cout << ans << '\n';
    }
    return 0;
}