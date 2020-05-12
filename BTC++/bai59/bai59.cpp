#include<iostream>
#include<vector>
using namespace std;

void SapXep(vector<int> &a , int n , vector<int> &temp);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        vector<int> a;
        vector<int> temp;
        for (i=0;i<n;i++)
        {
            int tmp;
            cin >> tmp;
            temp.push_back(tmp); // lưu trữ giá trị đầu của vector a
            a.push_back(tmp); 
        }
        SapXep(a,n,temp);
        for (i=0;i<a.size();i++)
            cout << a[i] <<" ";
        cout << endl;
    }
    return 0;
}

void SapXep(vector<int> &a , int n , vector<int> &temp)
{
    int i;
    a[0]*=a[1];
    for (i=1;i<n-1;i++)
    {   
        a[i]=temp[i-1]*temp[i+1]; // thay đổi từng giá trị a[i];
    }
    a[n-1]*=temp[n-2];
}