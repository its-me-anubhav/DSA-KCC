//https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int>ans;
        
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)   // push remaining elements if any
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n) // push remaining elements if any
        {
            ans.push_back(nums2[j]);
            j++;
        }
        nums1=ans;   //assign ans to nums1 as we don't need to return ans (its a void function)
      //  return ans;
    }
};  
