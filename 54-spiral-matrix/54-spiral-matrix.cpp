class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
      int rows=matrix.size();
        int col=matrix[0].size();
        
        int top=0;
        int bottom=rows-1;
        int left=0;
        int right=col-1;
        
        vector<int> v;
        
        int size=rows*col;
        
        while(v.size()<size)
        {
            if(top<=bottom)
            {
                for(int i=left;i<=right;i++)
                    {
                        v.push_back(matrix[top][i]);
                    }
                top++;
            }
            
            if(left<=right)
            {
                for(int i=top;i<=bottom;i++)
                    {
                        v.push_back(matrix[i][right]);
                    }
                right--;
            }
            
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                    {
                        v.push_back(matrix[bottom][i]);
                    }
                bottom--;
            }
            
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                    {
                        v.push_back(matrix[i][left]);
                    }
                left++;
            }
            
        }
        return v;
        
        
    }
};
