#include<iostream>
#include<vector>
using namespace std;
 
int main() 
{
	vector<long long> a;
	a.push_back(5);
	a.push_back(9);
	a.push_back(10);
	a.push_back(10);
	for (int i=0;i<a.size();i++)
		cout << a[i] <<" ";
	cout << endl;
	a.erase(a.begin()+1);
	for (int i=0;i<a.size();i++)
		cout << a[i] <<" ";
}