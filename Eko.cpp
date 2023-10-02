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
#define     mod              1000000007
#define     N                1000007
#define     pb              push_back
#define     Vector          vector<ll>
#define     PI              3.1415926535897
 
 //--------------------RAW CODE--------------------
  ll tree[N];
  ll n,m;
  bool ismono(ll h)
  {
    ll wood=0;

        for (int i=0; i<n; i++)
        {
             if(tree[i]>=h)
             wood+= (tree[i]-h);  
        }
        return wood>=m;

  }
void solve()
 {
    
    cin>>n>>m;
    for (int i=0; i<n; i++)
    cin>>tree[i];
    ll lo = 0, hi = 1e9, mid;
   
    while(hi-lo>1)
    {
         mid = (lo+hi)/2;
         if(ismono(mid))
            lo = mid;
            else
             hi = mid-1;

         
    }
    if(ismono(hi))
    cout<<hi<<endl;
    else
      cout<<lo<<endl;

    
 }
 
int main()
 {
      fast;    
      int t=1;
      //cin>>t;
      while(t--)
      solve();
 }