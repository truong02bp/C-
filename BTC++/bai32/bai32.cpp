#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int GCD(int a , int b);
int Counter(vector<int> &a , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Counter(a,n) << endl;
    }
    return 0;
}
int GCD(int a,  int b)
{
    int temp;
    while (b!=0)
    {
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}
int Counter(vector<int> &a , int n)
{
    sort(a.begin(),a.end());
    int temp = a[1] - a[0];
	for(int i = 2; i<n; i++){
		if(a[i] != a[i-1])
        {
			temp = GCD(temp, (a[i] - a[i-1]));
		}
	}
    int count=0;
    for (int i=1;i<=temp;i++)
        if (temp%i==0)
            count++;
    return count;
}