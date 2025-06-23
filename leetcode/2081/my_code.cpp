// Time Exceeded error as we are checking all base10 no. 1,2,3,4..... for big n takes time

#include <string>
#include <iostream>

using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            if (s[i] != s[j]) return false;
        }
        return true;
    }

    string toBase(int num, int base) {
        string s = "";
        while (num > 0) {
            s = to_string(num % base) + s;
            num /= base;
        }
        return s;
    }
    long long kMirror(int k, int n) {
        long long sum = 0;
        int count = 0;
        int i = 1;

        while (count < n) {
            string base10 = to_string(i);
            if (isPalindrome(base10)) {
                string baseK = toBase(i, k);
                if (isPalindrome(baseK)) {
                    sum += i;
                    count++;
                }
            }
            i++;
        }

        return sum;
    }
};

int main(){
    Solution sol;
    cout<<sol.kMirror(3,25)<<endl;
    return 0;
}