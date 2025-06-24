//Find All K-Distant Indices in an Array
#include<vector>
#include<cmath>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> j;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                j.push_back(i);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int val : j) {
                if (abs(i - val) <= k) {
                    result.push_back(i);
                    break; //for each i minimum 1 value of j checked
                }
            }
        }

        return result;
    }
};

int main(){
    Solution sol;
    vector<int> nums={2,4,2,7,8,9,2};
    vector<int> result;
    result=sol.findKDistantIndices(nums,2,1);

    for(int val:result){

        cout <<  val <<endl;
    }
    return 0;
}