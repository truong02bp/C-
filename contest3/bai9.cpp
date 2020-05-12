#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct job
{
    int code;
    int time;
    int value;
};
int n;
vector<job> a;
vector<bool> check;

bool dieuKien(job a , job b)
{
    return a.value > b.value;
}
void result()
{
    int rs = 0,cnt=0;
    for (int i=0;i<a.size();i++)
        for (int j=min(n,a[i].time)-1;j>=0;j--)
            if (check[j]==false)
            {
                check[j]=true;
                rs+=a[i].value;
                cnt++;
                break;
            }
    cout << cnt << " " << rs << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        check.assign(1005,false);
        cin >> n;
        for (int i=0;i<n;i++)
        {
            job temp;
            cin >> temp.code >> temp.time >> temp.value;
            a.push_back(temp);
        }
        sort(a.begin(),a.end(),dieuKien);
        result();
    }
    return 0;
}