class Solution {
public:
    vector<string> result;
    void BinaryStrings(int n,string& curr)
    {
        if(curr.size()==n)
        {
            result.push_back(curr);
            return;
        }
        //choose '0' //select
        curr.push_back('0');
        BinaryStrings(n,curr);
        //deselect
        curr.pop_back();
        //choose '1'  //select
        curr.push_back('1');
        BinaryStrings(n,curr);
        //deselect
        curr.pop_back();            
        
    }

    string findDifferentBinaryString(vector<string>& nums) 
    {
        string q;
        int n=nums.size();
        int m=result.size();
        string curr;
        BinaryStrings(n,curr);
        unordered_set<string> s(nums.begin(),nums.end());
        for(const auto& str: result)
        {
            if(s.find(str)==s.end())
            {
                q=str;
                break;
            }
        }
        return q;
    }
};
