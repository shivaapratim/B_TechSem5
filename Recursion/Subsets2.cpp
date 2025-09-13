#include <bits/stdc++.h>
using namespace std;

void find(int ind, vector<vector<int>> &ans, vector<int> &ds, vector<int> &nums)
{
    ans.push_back(ds);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i > ind && nums[i] == nums[i - 1])
            continue; // skip duplicates
        ds.push_back(nums[i]);
        find(i + 1, ans, ds, nums);
        ds.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> ds;
    find(0, ans, ds, nums);

    for (auto &vec : ans)
    {
        for (int x : vec)
            cout << x << " ";
        cout << "\n";
    }
}
