#include <iostream>
#include <cmath>
using namespace std;

// Optional: Fast I/O for handling large inputs
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

void solve() {
    // Read input
    double w;
    cin >> w;

    // Process and compute
    string result = "YES";
    if(w<=2){
    result = "NO";} else if (w/2 != floor(w/2)){
    result = "NO";}

    // Print output
    cout << result << endl;
}

int main() {
    fast_io;  // Enable fast I/O
    int t = 1;  // Number of test cases (adjust as needed)
    solve();
    return 0;
}
