#include<iostream>
#include<fstream>
using namespace std;


long long GCD (long long a, long long b);
long long LCM_of_array(long long n);

int main()
{
//    ifstream in("input2.txt",ios::in);
//    ofstream out("output2.txt",ios::out);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << LCM_of_array(n) << endl;
    }
    return 0;
}

long long GCD(long long a , long long b)
{
    long long temp;
    while (b!=0)
    {
        temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
long long LCM_of_array(long long n)
{
/*    long long LCM=2;
    for (long long i=2;i<=n;i++)
        LCM = (i*LCM) / GCD(i,LCM);
    return LCM;
*/
    long long LCM=1;
    long long a[n+5];
    a[0]=1;
    for (int i=1;i<n;i++)
    {
        a[i]=i+1;
        LCM = (a[i]*LCM) / (GCD(a[i],LCM)); 
    }
    return LCM;
}