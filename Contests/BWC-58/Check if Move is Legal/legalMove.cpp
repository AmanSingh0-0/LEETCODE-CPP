class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
        board[rMove][cMove] = color;
        int n = board.size(), m = board[0].size();
        bool flag = false;
        for (int i = rMove - 1; i >= 0; i--) {
            if (board[i][cMove] != color && board[i][cMove] != '.') continue;
            if (board[i][cMove] == '.') break;
            if (i < (rMove - 1)) flag = true;
            break;
        }
        for (int i = rMove + 1; i < n; i++) {
            if (board[i][cMove] != color && board[i][cMove] != '.') continue;
            if (board[i][cMove] == '.') break;
            if (i > (rMove + 1)) flag = true;
            break;
        }
        for (int i = cMove - 1; i >= 0; i--) {
            if (board[rMove][i] != color && board[rMove][i] != '.') continue;
            if (board[rMove][i] == '.') break;
            if (i < (cMove - 1)) flag = true;
            break;
        }
        for (int i = cMove + 1; i < m; i++) {
            if (board[rMove][i] != color && board[rMove][i] != '.') continue;
            if (board[rMove][i] == '.') break;
            if (i > (cMove + 1)) flag = true;
            break;
        }
        for (int i = rMove + 1, j = cMove + 1; i < n && j < m; i++, j++) {
            if (board[i][j] != color && board[i][j] != '.') continue;
            if (board[i][j] == '.') break;
            if (i > (rMove + 1)) flag = true;
            break;
        }
        for (int i = rMove - 1, j = cMove - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] != color && board[i][j] != '.') continue;
            if (board[i][j] == '.') break;
            if (i < (rMove - 1)) flag = true;
            break;
        }
        for (int i = rMove + 1, j = cMove - 1; i < n && j >= 0; i++, j--) {
            if (board[i][j] != color && board[i][j] != '.') continue;
            if (board[i][j] == '.') break;
            if (i > (rMove + 1)) flag = true;
            break;
        }
        for (int i = rMove - 1, j = cMove + 1; i >= 0 && j < m; i--, j++) {
            if (board[i][j] != color && board[i][j] != '.') continue;
            if (board[i][j] == '.') break;
            if (i < (rMove - 1)) flag = true;
            break;
        }
        return flag;
    }
};
