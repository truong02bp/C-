#include<iostream>
#include<map>
using namespace std;

int u,v,n,sum=0;
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

void sumNodeLeft(node *root , bool dir)
{
    if (root == NULL)
        return;
    if (!root->left && !root->right && dir == true)
        sum+=root->data;
    sumNodeLeft(root->left,true);
    sumNodeLeft(root->right,false);        
}

void solve()
{
    cin >> n;
    sum = 0;
    map<int , node*> a;
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
    sumNodeLeft(root , false);
    cout << sum  << endl;
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
    
