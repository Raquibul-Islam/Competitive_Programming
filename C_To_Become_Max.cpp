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
#define     range           10000000000000007
#define     pb              push_back
#define     Vector          vector<ll>
#define     PI              3.1415926535897
 
 //--------------------RAW CODE--------------------

 ll n,op,ans=-1;
bool possible(ll mid , vector<ll>&v)
{
    ll mx = *max_element(v.begin(), v.end());
    if(mx >= mid)return true;
    for(int i=0; i<n-1; i++)
    {
       Vector vv = v;
       ll target = mid;
       ll ind = i;
       ll rem = op;
       //cout<<"HI"<<endl;
       while(true)
       {
         // cout<<mid<<endl;
          if(ind == n || rem <0) break;
          if(vv[ind] >= target)
            return true;
            rem-=(target-v[ind]);
            ind++;
            target--;
       }
      
    }
     return false;
}
void solve()
 {
    
    cin>>n>>op;
    Vector v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];
    ll low = 0, high = 1e15;
    
    while(high - low >=0) 
    {
        ll mid = low+(high-low)/2LL;
        if(possible(mid, v))
        {
             ans = mid;
             low = mid+1LL;
        }
        else
           high = mid-1LL;
       

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