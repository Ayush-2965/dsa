#include <vector>
#include <string>
#include <string.h>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result;

        for (int i = 0; i < s.length(); i += k) {
            string part = s.substr(i, k);
            if (part.length() < k) {
                part += string(k - part.length(), fill);  // pad with fill
            }
            result.push_back(part);
        }

        return result;
    }
};


int main() {
    Solution sol;
    vector<string> parts = sol.divideString("abcdefghij", 3, 'x');

    for (const string& part : parts) {
        cout << part << endl;
    }

    return 0;
}