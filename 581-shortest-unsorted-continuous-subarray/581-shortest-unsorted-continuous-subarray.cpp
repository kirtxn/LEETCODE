class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> temp;
        int n=nums.size();
       
        temp=nums;
         sort(nums.begin(),nums.end());
        int i=0;
        int j=temp.size()-1;
        while(i<n and nums[i]==temp[i])
        {
            i++;
        }
        while(j>=0 and nums[j]==temp[j])
        {
            j--;
        }
        if(i==n)
        {
            return 0;
        }
        return j-i+1;
    }
};