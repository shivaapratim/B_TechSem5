#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> &a, vector<int> &cur, vector<vector<int>> &ans)
{
    ans.push_back(cur);
    for (int j = i; j < a.size(); j++)
    {
        if (j > i && a[j] == a[j - 1])
            continue;
        cur.push_back(a[j]);
        dfs(j + 1, a, cur, ans);
        cur.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
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
