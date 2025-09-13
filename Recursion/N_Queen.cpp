#include <bits/stdc++.h>
using namespace std;

bool safe(int r, int c, vector<string> &board, int n)
{
    for (int i = 0; i < r; i++)
        if (board[i][c] == 'Q')
            return false;
    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q')
            return false;
    for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q')
            return false;
    return true;
}

void solve(int r, vector<string> &board, int n, vector<vector<string>> &ans)
{
    if (r == n)
    {
        ans.push_back(board);
        return;
    }
    for (int c = 0; c < n; c++)
    {
        if (safe(r, c, board, n))
        {
            board[r][c] = 'Q';
            solve(r + 1, board, n, ans);
            board[r][c] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    solve(0, board, n, ans);
    for (auto &sol : ans)
    {
        for (auto &row : sol)
            cout << row << "\n";
        cout << "----\n";
    }
}
