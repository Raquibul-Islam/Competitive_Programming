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
    
    ll r,g,b,mm=0;
    cin>>r>>g>>b;Vector v(3);
    v[0]=r,v[1]=g,v[2]=b;
    sort(v.begin(), v.end());
    ll ans = (r/3 + g/3 + b/3) + (min({r%3, g%3, b%3}));   
    ll mn = min({r,g,b});
    mm  = (mn-1)+((v[1]-(v[0]-1))/3)+((v[2]-v[0]+1)/3);
    cout<<max({ans,mn,mm})<<endl;  
}
 
int main()
{
     fast;    
     int t=1;
    // cin>>t;
     while(t--)
     solve();
}