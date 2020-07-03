#include<iostream>
#include<map>
using namespace std;

int u,v,n,sum;
char x;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right  = NULL;
    }
};

void result(node *root)
{
    if (root == NULL)
        return;
    if (root->left!= NULL && root->right!= NULL)
    {
        sum+=root->data;
        result(root->left);
        result(root->right);
    }        
    else 
        if (!root->left && !root->right)
            sum+=root->data;
}
void solve()
{
    cin >> n;
        node *root = NULL;
        node *child;
        map<int , node*> a;
        sum=0;
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
        result(root);
        if (sum ==2*root->data)
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