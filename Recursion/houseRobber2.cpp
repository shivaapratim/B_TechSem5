#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[101];

    int solve(vector<int> &nums, int i, int n)
    {
        if (i >= n)
        {
            return 0;
        }

        if (dp[i] != -1)
        {
            return dp[i];
        }

        int pick = nums[i] + solve(nums, i + 2, n);
        int notpick = solve(nums, i + 1, n);

        return dp[i] = max(pick, notpick);
    }

    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }

        memset(dp, -1, sizeof(dp));
        int take_first_house = solve(nums, 0, n - 1);

        memset(dp, -1, sizeof(dp));
        int skip_first_house = solve(nums, 1, n);

        return max(take_first_house, skip_first_house);
    }
};