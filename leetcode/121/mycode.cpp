#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices.front(),sell=prices.front(),profit=0;
        for(int val: prices){
            if(val<buy){
                buy=val;
                sell=val;
            }
            if(val>sell){
                sell=val;
                if((sell-buy)>profit){
                    profit=sell-buy;
                }
            }
        }
        return profit;
    }
};

//runtime 2s