#include<iostream>
#include<map>
#include<math.h>
#include<queue>
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

bool isPerfect(node *root)
{
    queue<node *> q;
    q.push(root);
    int l=0;
    while (!q.empty())
    {
        int cnt = q.size();
        if (cnt != pow(2,l))
            return false;
        for (int i=0;i<cnt;i++)
        {
            node *temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);     
        }
        l++;
    }
    return true;
}

void solve()
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
        if (x == 'L')
            parent->left = child;
        else 
            parent->right = child;
        a[v] = child;            
    }
    if (isPerfect(root))
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;    
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