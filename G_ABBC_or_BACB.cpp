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
    string s;
    cin>>s;
    ll ans =0, cnt=1;
    char tmp ;
    if(s[0] == 'B')
    {
        tmp = 'B';
    }
    else
    tmp = 'A';
    for(int i=1; i<s.size(); i++)
    {


        if(s[i]==tmp)
        {
            cnt++;
        
        }
        else
        {
            ans+=cnt;
            cnt =0;
            tmp = 'B';

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

 ll n;
    vector<pair<int, int>>vp;
    for (int i=0; i<n; i++)
    {   
         ll a,b;
         vp.push_back({a,b});
    }
    for (auto &v : vp)
        v.first;