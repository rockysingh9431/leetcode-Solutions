//88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        // As m and n represents number of elements in the nums1 and nums2 so the size of the new
        // array will be m+n-1 so the value of k have been set to m+n-1 to track and update the
        // values in nums1 
        while(i>=0 && j>=0)
        {
            if(nums1[i]>=nums2[j])
            {
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        // Here we are applying this while loop to check if any element is left in nums1 and nums2
        // accordingly update the value in nums1
        // Basically in above while loop we are applying the condition while(i<m and j<n) that
        // means it might be possible that either of the two array will not get completely
        // checked to avoid this error we are adding the while loop below  
        while(i>=0)
        {
            nums1[k--]=nums1[i--];
        }
        while(j>=0)
        {
            nums1[k--]=nums2[j--];
        }
    }
};