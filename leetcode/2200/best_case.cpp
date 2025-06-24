// diff of memory optimisation this is more optimised

#include<vector>
#include<cmath>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        int n = nums.size();
        // traverse number pairs
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (nums[j] == key && abs(i - j) <= k) {
                    res.push_back(i);
                    break;  // early termination to prevent duplicate addition
                }
            }
        }
        return res;
    }
};