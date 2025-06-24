#include <string>
#include<strings.h>
#include<iostream>

using namespace std;

//for each digit there must be one char in left

class Solution {
public:
    string clearDigits(string s) {
        int prev = 0; //taking previous index value in consideration
        for (int i = 1; i < s.length(); i++) {

            if (isdigit(s[i])) {
                s.erase(i, 1);    //remove char with (pos) and (no. of char) in arguments
                s.erase(prev, 1);
                --prev;
                i = prev;
            } else {

                prev++;
            }
        }

        return s;
    }
};

int main(){
    Solution sol;
    string str=sol.clearDigits("abcd45");
    cout<<str<<endl;
    return 0;
}