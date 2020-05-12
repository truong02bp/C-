#include <iostream>
#include <vector>
using namespace std;

int stop;

void sinh(char a[], int n)
{
    int i = n;
    while (a[i] == 'B')
    {
        a[i] = 'A';
        i--;
    }
    if (i > 0)
    {
        a[i] = 'B';
    }
    else
    {
        stop = 1;
    }
}
bool check(char a[], int n, int k)
{
    int sl = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 'A')
            count++;
        else
        {
            count = 0;
        }
        if (count >= k)
            sl++;
    }
    return (sl == 1);
}
int main()
{
    stop = 0;
    int n, k;
    cin >> n >> k;
    char a[100];
    for (int i = 1; i <= n; i++)
        a[i] = 'A';
    vector<string> rs;
    while (stop == 0)
    {

        if (check(a, n, k) == true)
        {
            string temp = "";
            for (int i = 1; i <= n; i++)
                temp += a[i];
            rs.push_back(temp);
        }
        sinh(a, n);
    }
    cout << rs.size() << endl;
    for (int i = 0; i < rs.size(); i++)
        cout << rs[i] << endl;
    return 0;
}