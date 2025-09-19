#include<bits/stdc++.h>
using namespace std;
class Spreadsheet {
vector<vector<int>> sp;
public:
    Spreadsheet(int rows) {
        sp = vector<vector<int>>(rows, vector<int>(26, 0));
    }
    
    void setCell(string cell, int value) {
        char col_val = cell[0];
        string row_val = cell.substr(1);
        int row = stoi(row_val)-1;
        int col = col_val - 'A';
        sp[row][col] = value;
    }
    
    void resetCell(string cell) {
        char col_val = cell[0];
        string row_val = cell.substr(1);
        int row = stoi(row_val)-1;
        int col = col_val - 'A';
        sp[row][col] = 0;
    }
    
    int getValue(string formula) {
        formula = formula.substr(1);
        int pos = formula.find('+');
        string left_expr = formula.substr(0,pos);
        string right_expr = formula.substr(pos+1);
        int left_val = 0;
        int right_val = 0;
        if(isdigit(left_expr[0]))
        {
            left_val = stoi(left_expr);
        }
        else
        {
            int col = left_expr[0] - 'A';
            string row_left = left_expr.substr(1); 
            int row = stoi(row_left)-1;
            left_val = sp[row][col];
        }
        if(isdigit(right_expr[0]))
        {
            right_val = stoi(right_expr);
        }
        else
        {
            int col = right_expr[0] - 'A';
            string row_right = right_expr.substr(1); 
            int row = stoi(row_right)-1;
            right_val = sp[row][col];
        }
        return left_val + right_val;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */