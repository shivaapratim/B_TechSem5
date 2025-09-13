#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int> &arr, vector<vector<int>> &ans, vector<int> &c, int t)
{
    if (t == 0)
    {
        ans.push_back(arr);
        return;
    }
    if (i >= c.size() || t < 0)
        return;

    // INCLUDE
    arr.push_back(c[i]);
    solve(i, arr, ans, c, t - c[i]); // reuse same element
    arr.pop_back();

    // EXCLUDE
    solve(i + 1, arr, ans, c, t);
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    vector<vector<int>> ans, arrs;
    vector<int> arr;
    solve(0, arr, ans, c, t);

    for (auto &vec : ans)
    {
        for (int x : vec)
            cout << x << " ";
        cout << "\n";
    }
}
