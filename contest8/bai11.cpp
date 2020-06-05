// #include<iostream>
// #include<queue>
// #include<map>
// using namespace std;

// bool ngto[10000];
// string s,t;

// void sang()
// {
//     for (int i=0;i<=10000;i++)
//         ngto[i]=true;
//     ngto[0]=false;
//     ngto[1]=false;
//     for (int i=2;i*i<=10000;i++)
//         if (ngto[i]==true)
//             for (int j=i*i;j<=10000;j+=i)
//                 ngto[j]=false;
// }

// int toSo(string temp)
// {
//     int rs = 0;
//     for (int i=0;i<temp.length();i++)
//         rs = rs*10 + temp[i]-'0';
//     return rs;
// }

// int result()
// {
//     queue<string> a;
//     map<string,int> rs;
//     a.push(s);
//     rs[s] = 0;
//     while (!a.empty())
//     {
//         string temp = a.front();
//         a.pop();    
//         for (int i=3;i>=0;i--)
//         {
//             for (int j=0;j<10;j++)
//             {
//                 string tmp = temp;
//                 if (tmp[i]!=j+'0')
//                 {
//                     tmp[i] = j+'0';
//                     if (ngto[toSo(tmp)]==true && rs.find(tmp) == rs.end())
//                     {
//                         if (tmp == t)
//                             return rs[temp]+1;
//                         a.push(tmp);
//                         rs[tmp]=rs[temp]+1;
//                     }
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     int x;
//     cin >> x;
//     sang();
//     while (x--)
//     {
//         cin >> s >> t;
//         cout << result() << endl;
//     }
//     return 0;
// }
#include<iostream>
#include<string.h>
#include<queue>
using namespace std; 
int s,t;
int d[]={1,10,100,1000};
bool sang[10001];
void sangngto(){
    memset(sang,true,sizeof(sang));
    sang[1]=false;
    for(int i=2;i<=100;i++)
        if(sang[i]){
            for(int j=2;i*j<=10000;sang[i*j++]=false);
        }
}
int xuly(){
    queue<int> q;
    int a[10001]={0};
    if(s==t) 
        return 0;
    q.push(s);
    a[s]=1;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int i=0;i<4;i++)
            for(int j=0;j<10;j++){
                int v=d[i]*((u/d[i]/10)*10+j) + u%d[i];
                if(v>1000 && sang[v] && a[v]==0){
                    q.push(v);
                    a[v]=a[u]+1;
                    if(v==t) return (a[t]-1);
                }
            }
    }
}
int main() { 
    sangngto();
    int test; cin>>test;
	while(test--){
		cin>>s>>t;
		cout<<xuly();
        cout<<endl;
	}
	return 0; 
} 