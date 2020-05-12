#include<iostream>
using namespace std;

int n, a[1000];
void in()
{
    for (int i=0;i<n;i++)
        cout << a[i] <<" ";
    cout << endl;
}
void result()
{
    int l =1;
    for (int i=0;i<n-1;i++)
    {
        int min = i,kt=0;
        for (int j=i+1;j<n;j++)
            if (a[min] > a[j])
            {
                min = j;
                kt=1;
            }
        swap(a[i],a[min]);
        cout <<"Buoc " << l <<": ";
        in();
        l++;
        if (kt==0)
            break;
    }
}

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    result();
    return 0;
}