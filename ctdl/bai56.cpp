#include<bits/stdc++.h>
using namespace std;

int s,d;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string rs="";
        cin >> s >> d;
        if (s > 9*d)
            cout << -1 << endl;
        else 
        {
            while(d>0)
            {
                if (s > 9)
                {
                    rs = '9' + rs;
                    s-=9;
                }
                else 
                {
                    if (d>1 && s==1)
                        rs = '0' + rs;
                    else 
                        if (d==1)
                            rs = (char)(s+'0') + rs;  
                        else 
                            if (d>1 && s>1)
                            {
                                int temp = s-1;
                                rs = (char)(temp+'0')+rs;
                                s-=temp;
                            }      
                }
                d--;   
            }              
            cout << rs << endl;
        }
        
    }
    return 0;
}