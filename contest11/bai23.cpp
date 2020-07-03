#include<iostream>
using namespace std;

int n,a[1000005],rs;

struct node 
{
    int data;
    int level;
    node *left;
    node *right;
    node(int x , int l)
    {
        data = x;
        level = l;
        left = right = NULL;
    }
};

void buildTree(node *&root , int l , int r , int level)
{
    if (l > r)
        return ;
    root = new node(a[l],level);
    rs = max(rs,level);
    int i=l;
    for (i=l+1;i<=r;i++)
        if (a[i] > a[l])
            break;                   
    buildTree(root->left,l+1,i-1,level+1);
    buildTree(root->right,i,r,level+1);        
}
bool isPre(int l , int r)
{
    if (l > r)
        return true;
    int i=l;
    for (i=l+1;i<=r;i++)
        if (a[i] > a[l])
            break;
    for (int j=l+1;j<i;j++)
        if (a[j] >= a[l])
            return false;
    for (int j=i;j<=r;j++)
        if (a[j] <= a[l])
            return false;
    return (true && isPre(l+1,i-1) && isPre(i,r));                        
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
        if (isPre(0,n-1)==false)
            cout <<"NO" << endl;
        else 
        {
            rs = 0;
            node *root;
            buildTree(root,0,n-1,0);
            cout << rs << endl;
        }        
    }
    return 0;
}