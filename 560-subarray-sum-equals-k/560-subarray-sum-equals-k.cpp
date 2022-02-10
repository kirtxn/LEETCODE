#define debug(x) cout << #x << ":" << x << "\n";
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> umap;
        int sum = 0;
        int count = 0;
        umap[sum] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int find = sum - k;
            if(umap.find(find) != umap.end()){
                count += umap[find];
            }
            umap[sum]++;
        }
        return count;
    }
};