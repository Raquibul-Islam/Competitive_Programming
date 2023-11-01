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
    ll n,k,ans=0, sum;
    cin>>n>>k;
    Vector f(n),h(n);
    for (int i=0; i<n; i++)
        cin>>f[i];

         for (int i=0; i<n; i++)
          cin>>h[i];
    
    ll r = 0, l = 0;
      sum = f[0];
     if (sum <= k)
          ans = 1;
     for (r = 1; r < n; r++)
     {
          if (h[r - 1] % h[r] == 0)
               sum += f[r];
          else
          {
               l = r;
               sum = f[r];
          }
          while (sum > k)
          {
               sum -= f[l];
               l++;
          }
          ans = max(ans, r - l + 1);
     }
     cout << ans <<endl;

   
    
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}