#include<iostream>
#include<map>
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

void result(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data <<" ";
        if (temp->left != NULL )
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int , node*> a;
        cin >> n;
        node *root = NULL;
        node *child;
        for (int i=0;i<n;i++)
        {
            node *parent;
            cin >> u >> v >> x;
            if (a.find(u)  == a.end())
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
    }
    return 0;
}