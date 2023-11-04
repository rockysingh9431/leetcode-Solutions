class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        bool flag=true;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i] && flag)
            {
                flag=false;
                nums[j++]=nums[i-1];
            }
            else if(nums[i-1]!=nums[i])
            {
                flag=true;
                nums[j++]=nums[i-1];
            }
            else
                continue;
        }
        nums[j++]=nums[nums.size()-1];
        return j;
    }
};