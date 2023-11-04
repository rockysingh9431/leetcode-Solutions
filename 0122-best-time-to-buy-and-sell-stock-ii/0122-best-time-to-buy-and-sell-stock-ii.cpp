class Solution {
public:
    int f(vector<int>&prices,int ind,int buy,vector<vector<int>>&dp)
    {
        if(ind==prices.size())
            return 0;
        if(dp[ind][buy]!=-1)
            return dp[ind][buy];
        long profit=0;
        if(buy){
            profit=max(-prices[ind]+f(prices,ind+1,1,dp),f(prices,ind+1,0,dp));
        }
        else{
            profit=max(prices[ind]+f(prices,ind+1,0,dp),f(prices,ind+1,1,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        //return f(prices,0,0,dp);
        dp[n][0]=dp[n][1]=0;
        long long profit=0;
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<2;buy++)
            {
                if(buy==0)
                    profit=max(-prices[ind]+dp[ind+1][1],dp[ind+1][0]);
                else
                    profit=max(prices[ind]+dp[ind+1][0],dp[ind+1][1]);
                dp[ind][buy]=profit;
            }
        }
        return dp[0][0];
    }
};