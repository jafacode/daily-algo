//alright time to actually lock in
#include <iostream>
using namespace std;

void solve() {
    //Read input as string
    string s;
    cin >> s;
    //Create 'count' variable to keep in track of number of inversions
    int count = 0;

    //if there is no '1' then return 0 
    if(s.find_first_not_of('0') == string::npos){
        cout << 0 << endl;
        return;
    }

    //else go through the string and do the approach written in notes
    while(s.find_first_not_of('0') != string::npos){
        //create variables key, invert[], invertIndex
            //key: the target character the program is currently looking for it could either be '1' or '0'
            char key = '1';
            //invert[]: array that stores the indexes of characters that needs to be changed in the array
            int invert[s.size()];
            //invertIndex: an indicator for storing the next character in the invert[]
            int invertIndex = 0;

            //For loop through s
            for(int i=0; i<s.size(); i++){
                //if key = '1' and the current iterated char is '1' then save the position index to the invert[] and change the key to 0.
                //if key = '0' and the current iterated char is '0', first check if this the last iteration of the for loop or if the next iteration char is '0'
                //if it isnt the last iteration and the next char is not '0' store the index to invert[] and change the key to 1.
                if(s[i] == key){
                    if(key == '1'){
                        invert[invertIndex] = i;
                        invertIndex++;
                        key = '0';
                    } else if (i==s.size()-1){
                        //do nothing
                    } else if (s[i+1] == '0'){
                        //do nothing
                    } else {
                        invert[invertIndex] = i;
                        invertIndex++;
                        key = '1';
                    }
                }
            }

            //The inversion
            //Go through the invert[] and change each matching char in string s to its counterpart
            for(int i=0; i<invertIndex; i++){
                if(s[invert[i]] == '0'){
                    s[invert[i]] = '1';
                } else {
                    s[invert[i]] = '0';
                }
            }
            //Everytime one whole inversion is done increment count by one.
            count++;
    }

    //Print output
    cout << count << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}