/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution
{
public:
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }

    bool solve(vector<vector<char>> &board)
    {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                /* code */
                if (board[i][j] == '.')
                {
                    for (char c = '1'; c <= '9'; c++)
                    {
                        if (isValid(board, c, i, j))
                        {
                            board[i][j] = c;
                            if (solve(board) == true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>> &board, char c, int row, int col)
    {

        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] == c)
            {
                return false;
            }
            if (board[i][col] == c)
            {
                return false;
            }
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + (i % 3)] == c)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
