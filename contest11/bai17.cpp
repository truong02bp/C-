#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int u,v,n,index;
vector<int> value;
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

void getValue(node *root)
{
    if (root == NULL)
        return;
    getValue(root->left);
    value.push_back(root->data);
    getValue(root->right);    
}

node* toBST(node *root)
{
    if (root != NULL)
    {
        root->left = toBST(root->left);
        root->data = value[index];
        index++;
        root->right = toBST(root->right);    
        return root;
    }
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data <<" ";
    inorder(root->right);
}
void solve()
{
    map<int , node*> a;
    node *root = NULL;
    node *child;
    index = 0;
    value.clear();
    cin >> n;
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
    getValue(root);
    sort(value.begin(),value.end());
    root = toBST(root);
    inorder(root);
    cout << endl;
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