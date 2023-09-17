//بسم الله الرحمن الرحيم
//Author : Rakibul Islam  
#include<bits/stdc++.h>
using namespace std;
 
#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define     inn             cin>>n
#define     ins             cin>>s
#define     nl              endl
#define     ll              long long int
#define     Pair            pair<ll,ll>
#define     F               first
#define     S               second
#define     all(v)          v.begin(),v.end()
#define     Max             99999999999999999999
#define     Min             -1000000000000000014
#define     mod             1000000007
#define     range           100007
#define     pb              push_back
#define     Vector          vector<ll>
#define     PI              3.1415926535897
 
 //--------------------RAW CODE--------------------
  
void solve()
 {
    ll n,m,x,t,l,r,s=0;
    cin>>n;
    ll v[1000005],v1[1000005];
    v[0]=0;
    v1[0]=0;
    for (int i=1; i<=n; i++)
    {
         cin>>x;
         s+=x;
         v[i]=s;
         v1[i]=x;  

    }
    sort(v1, v1+n+1);
    for (int i=1; i<=n; i++) 
      v1[i]=v1[i]+v1[i-1];
    
    cin>>m;
    for (int j=0; j<m; j++)
    {
        cin>>t>>l>>r;
        if(t==1)
        cout<<abs(v[l-1]-v[r])<<endl;
        else
         cout<<abs(v1[l-1]-v1[r])<<endl;

    

    }
   

    
    
 }
 
int main()
 {
      fast;    
      int t=1;
     // cin>>t;
      while(t--)
      solve();
 }