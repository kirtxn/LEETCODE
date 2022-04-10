class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row[matrix.size()];
        bool col[matrix[0].size()];
        int i,j;
        int n=matrix.size();
        int m=matrix[0].size();
        for(i=0;i<n;i++)
        {
            row[i]=false;
        }
        
        for(i=0;i<m;i++)
        {
            col[i]=false;
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(row[i]==true || col[j]==true)
                {
                    matrix[i][j]=0;
                }
            }
        }
        }
};