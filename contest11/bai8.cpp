#include<iostream>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int n,u,v;
char c;

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

void result(node *root)
{
    queue<node *> q;
    stack<int> s;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        s.push(temp->data);
        q.pop();
        if (temp->right != NULL)
            q.push(temp->right);
        if (temp->left != NULL)
            q.push(temp->left);    
    }
    while (!s.empty())
    {
        cout << s.top() <<" ";
        s.pop();
    }
    cout << endl;
}

void solve()
{
    map<int , node *> a;
    node *root = NULL;
    node *child;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> u >> v >> c;
        node *parent;
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
        if (c=='L')
            parent->left = child;
        else 
            parent->right = child;
        a[v] = child;            
    }
    result(root);
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