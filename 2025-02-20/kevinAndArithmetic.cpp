#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int even_count = 0, odd_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    
    int result = 0;

    if (even_count > 0) {
        result++;
    }
    
    result += odd_count;
    
    if (even_count == 0) {
        result = odd_count - 1;
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
