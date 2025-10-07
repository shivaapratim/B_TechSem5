#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void zigzag(TreeNode *root)
{
    if (!root)
        return;
    queue<TreeNode *> q;
    q.push(root);
    bool leftToRight = true;
    while (!q.empty())
    {
        int n = q.size();
        vector<int> level(n);
        for (int i = 0; i < n; i++)
        {
            TreeNode *node = q.front();
            q.pop();
            int index = leftToRight ? i : (n - i - 1);
            level[index] = node->val;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        for (int val : level)
            cout << val << " ";
        leftToRight = !leftToRight;
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    zigzag(root);
}
