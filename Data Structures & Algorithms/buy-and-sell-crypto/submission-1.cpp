class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans =-1; int maxtillnow = -1;
        for(int j=prices.size()-1;j>=0;j--){
            maxtillnow = max(maxtillnow,prices[j]);
            ans = max(ans, maxtillnow-prices[j]);
            
        }
        return ans;
        
    }
};
