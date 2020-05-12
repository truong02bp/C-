#include<iostream>
#include<algorithm>
using namespace std;

int Sort(string str)
{
    for (int i=0;i<str.length()-1;i++)
    {
        if (str[i]==str[i+1])
        {
            bool kt=false;
            for (int j=i+1;j<str.length();j++)
                if (str[j]!=str[i])
                {
                    kt=true;
                    char temp = str[i+1];
                    str[i+1] = str[j];
                    str[j]=temp;
                    break;
                }
            if (kt==false)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << Sort(str) << endl;
    }
    return 0;
}