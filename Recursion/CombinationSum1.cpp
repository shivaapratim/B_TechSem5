#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int t, vector<int> &a, vector<int> &cur, vector<vector<int>> &ans)
{
    if (t == 0)
    {
        ans.push_back(cur);
        return;
    }
    if (i == a.size() || t < 0)
        return;
    cur.push_back(a[i]);
    dfs(i, t - a[i], a, cur, ans);
    cur.pop_back();
    dfs(i + 1, t, a, cur, ans);
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> ans;
    vector<int> cur;
    dfs(0, t, a, cur, ans);
    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }
}
