class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int left=0;
        int right=n-1;
        int l,b;
        int a;
        int maxA=0;
        while(left<right)
        {
            b=right-left;
            if(height[left]<height[right])
            {
                l=height[left];
                left++;
            }
            else
            {
                l=height[right];  
                right--; 
            }
            a=l*b;
            if(a>maxA)
            {
                maxA=a;
            }
        }
        return maxA;
    }
};
