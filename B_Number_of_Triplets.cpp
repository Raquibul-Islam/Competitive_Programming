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
   int n, x, y,cnt=0;
    vector<pair<int, int>>a;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            x = (a[j].first + a[i].first);
            y = (a[j].second + a[i].second);
            int midx = x/2, midy = y/2;
            if(abs(x)%2 == 0 and abs(y)%2 == 0)
            {
                
          int id = lower_bound(a.begin(), a.end(), make_pair(midx, midy))-a.begin();
        if(id < n and a[id] == make_pair(midx, midy)) cnt++;
            }
        }
    }
    cout << cnt << nl;
            
  }
 
int main()
{
     fast;    
     int t=1;
     //cin>>t;
     while(t--)
     solve();
}