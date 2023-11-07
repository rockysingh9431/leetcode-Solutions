class Solution {
public:
    bool f(vector<int>&nums,int ind,vector<int>&dp)
    {
        if(ind==nums.size()-1)
            return true;
        if(ind>=nums.size())
            return false;
        if(dp[ind]!=-1) return dp[ind];
        for(int i=1;i<=nums[ind];i++)
        {
            if(f(nums,ind+i,dp))
                return dp[ind]=1;
        }
        return dp[ind]=0;
    }
    bool canJump(vector<int>& nums) {
        //vector<int>dp(nums.size(),-1);
        //return f(nums,0,dp);
        int n=nums.size();
        int maxReach=0;
        for(int ind=0;ind<n;ind++)
        {
            if(ind>maxReach) return false;
            maxReach=max(maxReach,ind+nums[ind]);
        }
        return true;
        
    }
};