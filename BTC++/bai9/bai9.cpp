#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void Display(long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Display(n);
    }
    return 0;
}

void Display(long long n)
{
    vector<long long> a;
    long long i=2;
    long long b = sqrt(n)+1;
    while (i<=b)
    {
        int counter=0;
        while (n%i==0)
        {
            n/=i;
            counter++;
        }
        if (counter>0)
            a.push_back(i);
        i++;
    }
    if (n>1)
        a.push_back(n);
    sort(a.begin(),a.end());
    cout << a[a.size()-1] << endl;
}