#include<vector>
#include<climits>
#include<iostream>

using namespace std;

//Using Kadane's algorithm (as brute force technique will have O(n^2) time complexity)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            maxSum = max(currSum, maxSum);
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main(){
    Solution sol;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<sol.maxSubArray(nums)<<endl;
}