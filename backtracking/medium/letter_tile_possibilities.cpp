class Solution {
public:
    void solve(int n,string &tiles ,vector<bool> &used,string &curr,unordered_set<string> &result)
    {
        result.insert(curr);
        for(int i=0;i<n;i++)
        {
            if(used[i])
            {
                continue;
            }
            //if char is selected
            used[i]=true;
            curr.push_back(tiles[i]);
            solve(n,tiles,used,curr,result);

            //if char is not selected
            used[i]=false;
            curr.pop_back();
        }   
    }

    int numTilePossibilities(string tiles) 
    {
        int n=tiles.length();
        vector<bool> used(n,false);
        unordered_set<string> result; //so that duplicates can be avoided
        string curr=" ";
        solve(n,tiles,used,curr,result);
        return result.size()-1;    //so that null string can be excluded
    }
};
