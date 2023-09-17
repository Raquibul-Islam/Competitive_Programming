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

    ll n,k,ans=0;
    cin>>n>>k;
    if(k>30)
    cout<<0<<endl;
    else
    {
        for (int i=0; i<=n; i++)
        {
            bool ok = true;
            ll last = n;
            ll first = i;
            for (ll j=1; j<k-1; j++ )
            {
                ll temp = last-first;
                last = first;
                first = temp;
                if(last>= first and temp>-1)
                continue;
                else
                {
                    ok = false;
                    break;
                }

            }
            if(ok)
            ans++;
        }
        cout<<ans<<endl;
    }
    
    
 }
 
int main()
 {
      fast;    
      int t=1;
      cin>>t;
      while(t--)
      solve();
 }