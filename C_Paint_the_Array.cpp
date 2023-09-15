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

    ll n,ans,cnt=0;
    cin>>n;
     Vector v(n);
     for(ll i=0; i<n; i++)
     cin>>v[i];
     for(ll i=0; i<n; i++)
     {
        for(ll j=1; j<n; j++)
        {
            if((v[j]%v[i]==0 and v[j-1]%v[i]!=0) || (v[j]%v[i]!=0 and v[j-1]%v[i]==0))
            cnt++;
        }
        if(cnt==n-1)
        {
            ans  = v[i];
            break;
        }
        else
        {
             cnt=0;
             ans =0;
        }
       
     }
     
     cout<<ans<<endl;
    
    
 }
 
int main()
 {
      fast;    
      int t=1;
      cin>>t;
      while(t--)
      solve();
 }