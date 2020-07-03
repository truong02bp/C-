#include<iostream>
#include<stack>
using namespace std;

string s;

struct node{
    char data;
    node *left;
    node *right;
};

bool isOperator(char c)
{
    if (c =='+' || c=='-' || c=='*' || c=='/')
        return true;
    return false;    
}
node* Tree()
{
    stack<node *> sta;
    for (int i=0;i<s.length();i++)
        if (isOperator(s[i]))
        {
            node *temp = new node;
            temp->data = s[i];
            temp->right = sta.top();
            sta.pop();
            temp->left = sta.top();
            sta.pop();
            sta.push(temp);
        }
        else 
        {
            node *temp = new node;
            temp->data = s[i];
            temp->left = NULL;
            temp->right = NULL;
            sta.push(temp);
        }
    return sta.top();    
}
void duyetGiua(node *tree)
{
    if (tree != NULL)
    {
        duyetGiua(tree->left);
        cout << tree->data <<" ";
        duyetGiua(tree->right);
    }
}


int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        node *tree = Tree();
        duyetGiua(tree);
        cout << endl;
    }
    return 0;
}