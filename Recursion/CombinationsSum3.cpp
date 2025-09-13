#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int k, int t, vector<int> &cur, vector<vector<int>> &ans)
{
    if (t == 0 && k == 0)
    {
        ans.push_back(cur);
        return;
    }
    if (i > 9 || t < 0 || k < 0)
        return;
    cur.push_back(i);
    dfs(i + 1, k - 1, t - i, cur, ans);
    cur.pop_back();
    dfs(i + 1, k, t, cur, ans);
}

int main()
{
    int k, n;
    cin >> k >> n;
    vector<vector<int>> ans;
    vector<int> cur;
    dfs(1, k, n, cur, ans);
    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }
}
