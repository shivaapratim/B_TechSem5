#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> &a, vector<int> &cur, vector<vector<int>> &ans)
{
    if (i == a.size())
    {
        ans.push_back(cur);
        return;
    }
    cur.push_back(a[i]);
    dfs(i + 1, a, cur, ans);
    cur.pop_back();
    dfs(i + 1, a, cur, ans);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> ans;
    vector<int> cur;
    dfs(0, a, cur, ans);
    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }
}
