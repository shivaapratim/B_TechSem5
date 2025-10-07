#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void verticalOrder(TreeNode *root)
{
    if (!root)
        return;
    map<int, vector<int>> mp;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto [node, hd] = q.front();
        q.pop();
        mp[hd].push_back(node->val);
        if (node->left)
            q.push({node->left, hd - 1});
        if (node->right)
            q.push({node->right, hd + 1});
    }
    for (auto &p : mp)
    {
        for (int v : p.second)
            cout << v << " ";
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    verticalOrder(root);
}
