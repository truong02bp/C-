#include<iostream>
#include<map>
#include<stack>
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
    stack<node *> s1,s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            node *temp = s1.top();
            cout << temp->data <<" ";
            s1.pop();
            if (temp->right != NULL)
                s2.push(temp->right);
            if (temp->left != NULL)
                s2.push(temp->left);    
        }
        while (!s2.empty())
        {
            node *temp = s2.top();
            cout << temp->data <<" ";
            s2.pop();
            if (temp->left != NULL)
                s1.push(temp->left); 
            if (temp->right != NULL)
                s1.push(temp->right);
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
            if (x =='L')
                parent->left = child;
            else 
                parent->right = child;
            a[v] = child;            
        }
        result(root);
    }
    return 0;
}