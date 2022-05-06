class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        //a dictionary to store value and frequency
        unordered_map<int, int> table;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            //The element to be searched for current nums[i] is stored in temp
            int temp=k-nums[i];
            if(table[temp]>0)
            {
                count++;
                table[temp]--; //because one pair to be used ony once
            }
            else
                table[nums[i]]++; //increasing freq of current value because remained unused
            
        }
        return count;
        
    }
};