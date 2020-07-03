#include<iostream>
#include<map>
using namespace std;

int u,v,n;
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

bool isFullTree(node *root)
{
    if (root == NULL)
        return true;
    if (!root->left && !root->right)
        return true;
    if (isFullTree(root->left) && isFullTree(root->right) && root->left!= NULL && root->right!=NULL)
        return true;
    return false;            
}

void solve()
{
    cin >> n;
    map<int,node *> a;
    node *root = NULL;
    node *child;
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
        if (x == 'L')
            parent->left = child;
        else 
            parent->right = child;
        a[v] = child;            
    }
    if (isFullTree(root))
        cout << 1 << endl;
    else 
        cout << 0 << endl;    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}