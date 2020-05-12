#include<iostream>
using namespace std;

string Resuilt(string s)
{
    string kq = "";
    bool check[10001];
    for (int i=0;i<s.length();i++)
        check[s[i]-'0']=false; // đánh dấu là đã xuất hiện
    for (int i=0;i<s.length();i++)
    {
        if (check[s[i]-'0']==false) // nếu đã xuất hiện thì chuyển về true
            check[s[i]-'0']=true;
        else
        {
            check[s[i]-'0']=false; // nếu đã true rồi thì lại chuyển về false vì lặp lại
        }
    }
    for (int i=0;i<s.length();i++)
        if (check[s[i]-'0']==true) // lấy những thứ true
            kq+=s[i];
    return kq;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Resuilt(s) << endl;
    }
    return 0;
}