class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<int> stackk;
        stack<int> stack;
        
        int n=s.length();
        int m=t.length();
        for(int i=0;i<n;i++)
        {
           
            if(s[i]!='#')
            {
                stack.push(s[i]);
            }
            else
            {
                if(!stack.empty())
                {
                stack.pop();
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(t[i]!='#')
            {
                stackk.push(t[i]);
            }
            else
            {
                 if(!stackk.empty())
                {
                stackk.pop();
                }
                
            }
        }
        if(stack==stackk)
        {
            return true;
        }
        return false;
        
        
    }
};