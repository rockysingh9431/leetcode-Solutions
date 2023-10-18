// 27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ind=0;
        // taking a variable ind to keep track of new nums array
        for(int i=0;i<nums.size();)
        {
            //Here we are checking if the value of nums[i]!=val if it is true we will save this
            //element to current array (i.e inplace) and at the same time do update the value of 
            //ind to ind+1.
            if(nums[i++]!=val)
            {
                nums[ind++]=nums[i-1];
            }
        }
        // As its asking for no. of remanining elements in array (i.e ind). we will return ind here.
        return ind;
    }
};