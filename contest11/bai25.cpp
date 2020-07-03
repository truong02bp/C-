#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1000005];

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

void buildTree(node *&root , int l , int r)
{
    if (l > r)
        return;
    int mid = (l+r)/2;
    root = new node(a[mid]);
    buildTree(root->left,l,mid-1);
    buildTree(root->right,mid+1,r);
}
void pre(node *root)
{
    if (root == NULL)
        return;
    cout << root->data <<" ";
    pre(root->left);
    pre(root->right);    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        node *root = NULL;
        buildTree(root,0,n-1);
        pre(root);    
        cout << endl;
    }
    return 0;
}