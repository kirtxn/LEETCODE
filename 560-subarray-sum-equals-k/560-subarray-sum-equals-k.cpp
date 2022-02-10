#define debug(x) cout << #x << ":" << x << "\n";
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int i;
        int currsum=0;
        int count=0;
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            
            if(currsum==k)
            {
                count++;
            }
            if(mp.find(currsum-k)!=mp.end()){
                count+=mp[currsum-k];
            }
            mp[currsum]++;
        }
        return count;
    }
};