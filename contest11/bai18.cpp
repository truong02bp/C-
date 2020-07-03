#include<iostream>
using namespace std;

int n,a[10005];

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

void insert(node *&root , int value)
{
    if (root == NULL)
        root = new node(value);
    else 
        if (value <= root->data)
            insert(root->left,value);
        else 
            insert(root->right,value);             
}

void preOrder(node *root)
{
    if (root == NULL)
        return ;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void solve()
{
    node *root = NULL;
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i=0;i<n;i++)
        insert(root,a[i]);    
    preOrder(root);
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