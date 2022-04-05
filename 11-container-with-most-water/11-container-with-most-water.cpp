class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,h=height.size()-1;
        int area=0;
        while(l<h)
        {
            area=max(area,(h-l)*min(height[l],height[h]));
                if(height[l]<height[h])
                    l++;
                else
                    h--;
    
                
        }
        return area;
        
    }
};