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
  ll t,ca=0;
void solve()
{
    ll n,a,b,cnt=0,x, indu, indl, ans =0;
    cin>>n;
    cin>>a>>b;
    Vector arr(n);
    Vector v;
    for (int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
     v.push_back(arr[0]);  
     
    for (int i=1; i<n; i++)
    {

        if(arr[i]<=b and arr[0]+arr[i]<=b )
            v.push_back(arr[i]);  
        
    }

      ll tmp = (n*(n-1))/2;
      long long validPairs = 0;


        for (int i = 0; i < v.size(); ++i) {
             auto lb = lower_bound(v.begin()+i+1, v.end(),  a - v[i]);
             auto ub = upper_bound(v.begin(), v.end(),  b - v[i]);
             
             --ub;
    
             validPairs += ((ub - lb)+1);
             ans = max(ans, validPairs);
              //cout<<validPairs<<endl;
        }


        std::cout << "Case " << ca<<": " << ans << std::endl;
    }
 
int main()
{
     fast;    
     cin>>t;
     while(t--)
     {
        ++ca;
        solve();
     }
     
}