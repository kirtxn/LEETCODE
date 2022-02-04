class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // we will use unordered maps so that time complexity is O(n)
        unordered_map <int, int> pairs;
        for(int i =0; i<nums.size(); i++){
            pairs[nums[i]] +=1;
            if(pairs[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};
