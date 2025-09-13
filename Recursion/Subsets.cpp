#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<vector<int>> &ans, vector<int> &arr, vector<int> &nums)
{
    if (i >= nums.size())
    {
        ans.push_back(arr);
        return;
    }
    // INCLUDE
    arr.push_back(nums[i]);
    solve(i + 1, ans, arr, nums);
    arr.pop_back();

    // EXCLUDE
    solve(i + 1, ans, arr, nums);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<vector<int>> ans;
    vector<int> arr;
    solve(0, ans, arr, nums);

    for (auto &vec : ans)
    {
        for (int x : vec)
            cout << x << " ";
        cout << "\n";
    }
}
