#include <bits/stdc++.h>
using namespace std;

int dp[201][201];

// Recursive function to count unique paths
int solve(int i, int j, int m, int n)
{
    if (i == m - 1 && j == n - 1)
        return 1; // reached end
    if (i >= m || j >= n)
        return 0; // out of bounds

    if (dp[i][j] != -1)
        return dp[i][j]; // return memoized result

    return dp[i][j] = solve(i + 1, j, m, n) + solve(i, j + 1, m, n);
}

int main()
{
    int m, n;
    cin >> m >> n; // input rows and columns
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0, m, n) << endl; // print number of unique paths
    return 0;
}
