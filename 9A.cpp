#include <bits/stdc++.h>
#define pb              push_back
#define ll              long long int
#define scd(a)          scanf("%d",&a)
#define mp(a,b)         make_pair(a,b)
#define scl(w)          scanf("%I64d",&w)
#define scdd(a,b)       scanf("%d %d",&a,&b)
#define srt(a)          sort(a.begin(),a.end())
#define rsrt(a)         sort(a.rbegin(),a.rend())
#define scll(a,b)       scanf("%I64d %I64d",&a,&b)
///4direction ->        int del_x[]={-1,0,1,0},del_y[]={0,1,0,-1};
#define input(v,n)      for (int i=0;i<n;i++){int a;cin >> a;v.push_back(a);}
#define inputll(v,n)    for (ll i=0;i<n;i++){ll a;cin >> a;v.push_back(a);}
#define vii             vector < int >
#define vll             vector < ll >
#define pii             pair < int , int >
#define pll             pair < ll , ll >
#define show(x) cout << #x << " : " << x << endl
#define mk              make_pair
#define inf             10000000000000016

#define maxn            1000006

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int m,n,tmp;
    cin>>m>>n;
    int mx = max(m,n);
    if (mx==1)
    {
         cout<<"1/1"<<endl;
         return;
    }

   else if (mx==2)
    {
         cout<<"5/6"<<endl;
         return;
    }
    else if (mx==3)
    {
         cout<<"2/3"<<endl;
         return;
    }
    else if (mx==4)
    {
         cout<<"1/2"<<endl;
         return;
    }
    else if (mx==5)
    {
         cout<<"1/3"<<endl;
         return;
    }
    else if (mx==6)
    {
         cout<<"1/6"<<endl;
         return;
    }



}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
