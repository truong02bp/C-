#include<iostream>
#include<map>
using namespace std;

int n,m,u,v;
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

node * makeTree(int n , node *root)
{
    map<int , node *> a;
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
    return root;
}
bool equal(node *root1 , node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;    
    if (equal(root1->left,root2->left) && equal(root1->right,root2->right) && root1->data == root2->data)
        return true;
    return false;        
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        node *root1 = NULL;
        node *root2 = NULL;
        cin >> n;
        root1 = makeTree(n,root1);
        cin >> m;
        root2 = makeTree(m,root2);
        if (equal(root1,root2))
            cout << 1 << endl;
        else 
            cout << 0 << endl;  
    }
    return 0;
}