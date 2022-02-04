class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int,int>mp;
        for(int i=0;i<nums4.size();i++)
        {
            for(int j=0;j<nums3.size();j++)
            {
                mp[nums4[i]+nums3[j]]++;
            }
        }

        int count=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int x=-1*(nums1[i]+nums2[j]);
                if(mp.find(x)!=mp.end())
                    count=count+mp[x];
            }
        }
        return count;
    }
};
