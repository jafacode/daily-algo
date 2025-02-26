#include <iostream>
using namespace std;

void solve() {
    // Read input
    string s;
    int count = 0;
    cin >> s;

    if(s.find_first_not_of('0') == string::npos){
        cout << 0 <<endl;
        return;
    }

    while(s.find_first_not_of('0') != string::npos){
        char key = '1';
        int invert[s.size()];
        int invertIndex = 0;
        //create empty array of integers

        //for loop through s, if an index contains 1 set key to 0 save index to and array. if the index is '0' and key is '0' check the next character if that is also '0' do nothing, if it is '1' save the current index to the array
        //after looping loop again and when i == the index in the saved array change it.
        for(int i=0; i<s.size(); i++){
            if(s[i] == key){
                if(key == '1'){
                    if(invertIndex == 0 || invert[invertIndex-1] == '0'){
                        invert[invertIndex] = s[i];
                        invertIndex++;
                    }
                } else if (key == '0' && i != s.size()-1 && invert[invertIndex-1] == '1'){
                    if(s[i+1] == '1'){
                        invert[invertIndex]=s[i];
                        invertIndex++;
                        //save current i in array
                    }
                }
            }
        }
        if (invert[invertIndex-1] == '0'){
            invertIndex-=2;
        } else {
            invertIndex-=1;
        }
        
        //go through array and switch each according s[i] to the opposite character.
        // count ++
        for(int i=0; i<invertIndex; i++){
            if(s[i]=='0'){
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }
        count++;
    }

    // Print output
    cout << count << endl;
    return;
}



int main() {
    int t;  // Number of test cases
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
