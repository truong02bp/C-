#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool SoSanh(string a , string b);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a;
        for (int i=0;i<n;i++)
        {
            string temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end(),SoSanh); // sắp xếp dãy theo thứ tự : số đó ghép với số khác lớn nhất
        for (int i=0;i<a.size();i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}

bool SoSanh(string a , string b)
{
    string ab="";
    ab+=a+b;
    string ba="";
    ba+=b+a;
   return (ab > ba); // Ví dụ : a = 4 , b=6 :: ab=46 , ba=64 , return sắp xếp lớn hơn
}