#include <iostream>
using namespace std;

// Optional: Fast I/O for handling large inputs
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

void solve() {
    // Read input
    string s;
    int count;
    cin >> s;

    if(s.find_first_not_of('0') == string::npos){
        cout << 0 <<endl;
    }

    while(s.find_first_not_of('0') != string::npos){
        char key = '1';
        //for loop through s, if an index contains 1 set key to 0 save index to and array. if the index is '0' and key is '0' check the next character if that is also '0' do nothing, if it is '1' save the current index to the array
        //after looping loop again and when i == the index in the saved array change it.
        for(int i=0; )
    }

    // Print output
    cout << result << endl;
}

int main() {
    fast_io;  // Enable fast I/O
    int t;  // Number of test cases
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
