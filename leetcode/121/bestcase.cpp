#include<vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices.front(), profit = 0;
        for (int val : prices) {
            minprice = min(minprice, val);
            profit = max(profit, val - minprice);
        }
        return profit;
    }
};

//runtime 0s