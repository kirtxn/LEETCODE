class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
       int sums=0;
        int s=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sums=sums+nums[i];
        }
        
        s=(nums.size()*(nums.size()+1))/2;
        
        return s-sums;
    }

};