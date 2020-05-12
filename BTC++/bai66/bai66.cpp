#include<iostream>
using namespace std;

string Resuilt(string n)
{
    int l = n.length();
    int index = l-2;
    while (n[index] <= n[index+1])
        index--;
    if (index>=0)
    {
        int k=index+1;
        for (int i=l-1;i>index;i--)
            if (n[i] < n[index])
            {
                if (n[i] > n[k])
                    k=i;
            }
        char temp = n[index];
        n[index]=n[k];
        n[k] = temp;
        return n;
    }
    return "-1";
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        cout << Resuilt(n) << endl;
    }
    return 0;
}
