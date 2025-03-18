class Solution {
public:

    bool validate(vector<vector<char>>& board,int rs,int re,int cs,int ce)
    {
        unordered_set<char> st;
        for(int rows=rs;rows<=re;rows++)
        {
            for(int col=cs;col<=ce;col++)
            {
                if(board[rows][col]=='.')
                    continue;
                if(st.find(board[rows][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[rows][col]);
            }
        }
        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) 
    {
        //validate rows
        for(int rows=0;rows<9;rows++)
        {
            unordered_set<char> st;
            for(int col=0;col<9;col++)
            {
                if(board[rows][col]=='.')
                    continue;
                if(st.find(board[rows][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[rows][col]);
            }
        }
        //validate columns
        for(int col=0;col<9;col++)
        {
            unordered_set<char> st;
            for(int rows=0;rows<9;rows++)
            {
                if(board[rows][col]=='.')
                    continue;
                if(st.find(board[rows][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[rows][col]);
            }
        }

        //validate 3*3 boxes
        for(int rs=0;rs<9;rs+=3)
        {
            int re=rs+2;
            for(int cs=0;cs<9;cs+=3)
            {
                int ce=cs+2;
                if(!validate(board,rs,re,cs,ce))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
