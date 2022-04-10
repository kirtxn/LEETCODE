class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
       int n=nums.size();
        vector<int> v;
        int count=0;
        int flag=0;
        int product =1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                product=product*nums[i];
            
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                count++;
                flag=1;
            }
        }
        if(count>1)
        {
            for(int i=0;i<n;i++)
            {
                v.push_back(0);
            }
            return v;
        }
        
        if(flag==0)
        {
             for(int i=0;i<n;i++)
                {

                    v.push_back(product/nums[i]);
                }
        }
        else
                {
                    for(int i=0;i<n;i++)
                        {

                            if(nums[i]!=0)
                            {
                                v.push_back(0);
                            }
                            else
                            {
                                v.push_back(product);
                            }
                        }
                }
        
        
        return v;
    }
};