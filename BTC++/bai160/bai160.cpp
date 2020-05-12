#include<iostream>
using namespace std;

int Minn(string s);
int SoKiTu(string s);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Minn(s) << endl;
    }
    return 0;
}
int SoKiTu(string s)
{
    bool check[10001];
    int count=0;
    for (int i=0;i<s.length();i++)
        check[s[i]-'0']=true;
    for (int i=0;i<s.length();i++)
    {
        if (check[s[i]-'0']==true)
        {
            count++;
            check[s[i]-'0']=false;
        }
    }
    return count;
}
int Minn(string s)
{
    int min=s.length();
    int size = SoKiTu(s);
    for (int i=0;i<s.length();i++)
    {
        string kq="";
        for (int j=i;j<s.length();j++)
        {
            kq+=s[j];
            if (SoKiTu(kq)==size)
            {
                if (kq.length() < min)
                    min = kq.length();
                else
                {
                    break;
                }
            }
        }
    }
    return min;
}