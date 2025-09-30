#include <bits/stdc++.h>
using namespace std;

int dp[201][201];

// Recursive function to count unique paths avoiding obstacles
int solve(int i, int j, int m, int n, vector<vector<int>> &grid)
{
    if (i >= m || j >= n)
        return 0; // out of bounds
    if (grid[i][j] == 1)
        return 0; // obstacle cell
    if (i == m - 1 && j == n - 1)
        return 1; // reached end

    if (dp[i][j] != -1)
        return dp[i][j]; // memoization

    return dp[i][j] = solve(i + 1, j, m, n, grid) + solve(i, j + 1, m, n, grid);
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j]; // input grid (0 = empty, 1 = obstacle)

    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0, m, n, grid) << endl;
    return 0;
}
