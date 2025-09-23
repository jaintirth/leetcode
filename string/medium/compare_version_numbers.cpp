#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<string> split(const string& str)
    {
        vector<string> parts;
        size_t start = 0,pos;
        while((pos = str.find('.', start))!=string::npos)
        {
            parts.push_back(str.substr(start, pos-start));
            start = pos+1;
        }
        parts.push_back(str.substr(start));
        return parts;
    }

    int compareVersion(string version1, string version2) {
        vector<string> v1 = split(version1);
        vector<string> v2 = split(version2);
        if(v1.size()<v2.size())
        {
            int diff = v2.size()-v1.size();
            for(int i=0;i<diff;i++)
            {
                v1.push_back("0");
            }
        }
        if(v2.size()<v1.size())
        {
            int diff = v1.size()-v2.size();
            for(int i=0;i<diff;i++)
            {
                v2.push_back("0");
            }
        }
        int n = v1.size();
        for(int i=0;i<n;i++)
        {
            int ver1 = stoi(v1[i]);
            int ver2 = stoi(v2[i]);
            if(ver1<ver2)
            {
                return -1;
            }
            if(ver1>ver2)
            {
                return 1;
            }
        }
        return 0;
    }
};