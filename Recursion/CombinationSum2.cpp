#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int t, vector<int> &a, vector<int> &cur, vector<vector<int>> &ans)
{
    if (t == 0)
    {
        ans.push_back(cur);
        return;
    }
    for (int j = i; j < a.size(); j++)
    {
        if (j > i && a[j] == a[j - 1])
            continue;
        if (a[j] > t)
            break;
        cur.push_back(a[j]);
        dfs(j + 1, t - a[j], a, cur, ans);
        cur.pop_back();
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
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
