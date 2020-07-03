#include <iostream>
#include <queue>
#include <map>
using namespace std;

int u, v, n;
char x;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(node *root)
{
    if (root == NULL)
        return 0;
    return (1 + max(height(root->left), height(root->right)));
}
bool check(node *root, int level, int h)
{
    if (root == NULL)
        return true;
    if (!root->left && !root->right && level < h)
        return false;
    return (check(root->left, level + 1, h) && check(root->right, level + 1, h));
}
void solve(node *root, int h)
{
    if (check(root, 1, h))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
void result(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        node *root = NULL;
        node *child;
        map<int , node*> a;
        for (int i=0;i<n;i++)
        {
            node *parent;
            cin >> u >> v >> x;
            if (a.find(u) == a.end())
            {
                parent = new node(u);
                a[u] = parent;
                if (root == NULL)
                    root = parent;
            }
            else 
                parent = a[u];
            child = new node(v);
            if (x =='L')
                parent->left = child;
            else 
                parent->right = child;
            a[v] = child;            
        }
        int h = height(root);
        solve(root, h);
    }
    return 0;
}