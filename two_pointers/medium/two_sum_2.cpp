class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> v;
        int n=numbers.size();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                v.push_back(++l);
                v.push_back(++r);
                break;
            }
            else if(numbers[l]+numbers[r]<target)
            {
                l++;
            }    
            else
            {
                r--;
            }
        }
        return v;
    }
};
