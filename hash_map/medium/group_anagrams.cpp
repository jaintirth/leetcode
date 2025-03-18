class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string ,vector<string>> map;
        for(string word: strs)
        {
            string temp=word;
            sort(temp.begin(),temp.end());
            map[temp].push_back(word);
        }
        vector<vector<string>> v;
        for(auto& pair: map)
        {
            v.push_back(pair.second);
        }
        return v;
    }
};
