#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int k;
ll a,b;
vector<int> rs;
void result()
{
    int nho=0;
    while (a >0 || b > 0)
    {
        int temp = (a%10 + b%10 + nho);
        nho = temp / k;
        rs.push_back(temp%k);
        a/=10;
        b/=10;
    }
    // while (a >0)
    // {
    //     int temp = a%10 + nho;
    //     nho = temp / k;
    //     rs.push_back(temp%k);
    //     a/=10;
    // }
    // while (b >0)
    // {
    //     int temp = b%10 + nho;
    //     nho = temp / k;
    //     rs.push_back(temp%k);
    //     b/=10;
    // }
    if (nho!=0)
        rs.push_back(nho);
    for (int i=rs.size()-1;i>=0;i--)
        cout << rs[i];
    cout << endl;
}

int main()
{
    cin >> k >> a >> b;
    result();
    return 0;
}