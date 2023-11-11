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
     ll n,x,cnt=0;
    cin>>n;
    vector<pair<ll, ll>>vp;
    for (ll i=1; i<=n; i++)
    {
        cin>>x;
        vp.push_back({x,i});

    }
      //sort(vp.begin(), vp.end());
     for (ll i=0; i<n; i++)
    {
        cout<<"ok"<<nl;
         for (ll j = i+1; j<n and vp[j].first*vp[i].first<=2*n; j++)
         {
             cout<<vp[i].first*vp[j].first<<" "<<vp[i].second+vp[j].second<<endl;
                   if(vp[i].first*vp[j].first == vp[i].second+vp[j].second)
        
                    cnt++;

         }

    }
    cout<<cnt<<nl;
    
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}