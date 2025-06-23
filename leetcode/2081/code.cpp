#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(const string& s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l++] != s[r--])
                return false;
        }
        return true;
    }

    string toBaseK(long long num, int k) {
        string s = "";
        while (num > 0) {
            s = char('0' + (num % k)) + s;
            num /= k;
        }
        return s;
    }

    long long kMirror(int k, int n) {
        long long sum = 0;
        int count = 0;

        for (int len = 1; count < n; ++len) {
            int start = pow(10, (len - 1) / 2);
            int end = pow(10, (len + 1) / 2);

            for (int root = start; root < end && count < n; ++root) {
                string left = to_string(root);
                string right = left;

                if (len % 2)
                    right.pop_back();
                reverse(right.begin(), right.end());

                string full = left + right;
                long long num = stoll(full);

                string baseK = toBaseK(num, k);
                if (isPalindrome(baseK)) {
                    sum += num;
                    count++;
                }
            }
        }

        return sum;
    }
};