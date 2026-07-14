class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int last=prices[n-1];
        int ans=0;
        for(int i=n-2;i>=0;i--){
            if(prices[i]>last){
                last=prices[i];
            }
            else{
            ans=max(ans,last-prices[i]);

            }

        }

        return ans;
        
    }
};