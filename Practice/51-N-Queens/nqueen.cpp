class Solution {
public:
    bool isSafe(vector<string>& nQueens, int row, int col, int& n){
        //check if the column had a queen before.
        for (int i = 0; i != row; ++i)
            if (nQueens[i][col] == 'Q')
                return false;
        //check if the 45° diagonal had a queen before.
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (nQueens[i][j] == 'Q')
                return false;
         //check if the 135° diagonal had a queen before.
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (nQueens[i][j] == 'Q')
                return false;
        return true;
        
    }
    void solve(vector<vector<string>>& res,vector<string>& NQueens, int row, int &n){
        if(row==n){
            res.push_back(NQueens);
        }
        for(int col =0;col != n;++col){
            if(isSafe(NQueens,row,col,n)){
                NQueens[row][col] = 'Q';
                solve(res,NQueens,row+1,n);
                NQueens[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> NQueens(n,string(n,'.'));
        solve(res,NQueens,0,n);
        return res;
    }
};
