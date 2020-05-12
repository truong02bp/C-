#include <iostream>
using namespace std;

int pos, a[100], stop;

long long sum(int a[], int pos)
{
	long long sum = 0;
	for (int i = 1; i <= pos; i++)
		sum = sum * 10 + a[i];
	return sum;
}
void sinh(int a[], int pos)
{
	int i = pos;
	while (a[i] == 9)
	{
		a[i] = 0;
		i--;
	}
	if (i == 0)
		stop = 1;
	else
	{
		a[i] = 9;
	}
}
void init(int a[], int pos)
{
	for (int i = 1; i <= pos; i++)
		a[i] = 0;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, kt = 0;
		cin >> n;
		pos = 1;
		while (true)
		{
			init(a, pos);
			stop=0;
			while (stop == 0)
			{
				long long temp = sum(a, pos);
				if (temp % n == 0 && temp != 0)
				{
					kt = 1;
					cout << temp << endl;
					break;
				}
				sinh(a, pos);
			}
			if (kt == 1)
				break;
			if (pos > 15)
				break;
			pos++;
		}
	}
	return 0;
}