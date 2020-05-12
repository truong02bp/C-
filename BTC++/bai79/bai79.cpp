#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<bool> check(1000001,false);
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
            if (a[i] >= 0 )
                check[a[i]]=true;
        }
        int i=1;
        while (check[i]==true)
            i++;
        cout << i << endl;
    }
    return 0;
}