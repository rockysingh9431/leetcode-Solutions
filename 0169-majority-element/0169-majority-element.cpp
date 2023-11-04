class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int maxEle=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                maxEle=nums[i];
                count++;
            }
            else if(maxEle==nums[i])
            {
                count++;
            }
            else
                count--;
        }
        return maxEle;
    }
};