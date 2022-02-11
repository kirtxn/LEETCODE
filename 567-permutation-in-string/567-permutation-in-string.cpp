class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len=s2.size();
        int window=s1.size();
        vector<int> hashso(26,0);
        vector<int> hashst(26,0);
        
        if(s1.size()>s2.size())
        {
            return false;
        }
        
        int left=0,right=0;
        while(right<window)
        {
            hashso[s1[right]-'a']+=1;
            hashst[s2[right++]-'a']+=1;
            
        }
        if(hashso==hashst){
            return true;
        }
        right -=1;
        
        while(right<len)
        {
            if(hashso==hashst)
            {
                return true;
                
            }
            
            right +=1;
            if(right!=len)
            {
                hashst[s2[right]-'a']+=1;
                hashst[s2[left]-'a']-=1;
            }
            
            left +=1;
        }
     return false;
    
        
    }
};