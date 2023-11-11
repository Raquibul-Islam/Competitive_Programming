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
    ll  n;
    cin>>n;
    Vector div,ans;
   ll  tmp = static_cast<ll >(sqrt(n));

    for (ll  i = 1; i <= tmp; ++i) {
        if (n % i == 0) {
            div.push_back(i);
            if (i != n / i) {
                div.push_back(n / i);
            }
        }

    }sort(div.begin(), div.end());


    if(n==1)
    {
        cout<<6<<endl;
        return;
    }
    if(div.size()==2)
    {
        cout<<4*n+2<<endl;
        return;
    }
       for (ll  i=1; i<div.size(); i++)
    {
        ll tmp = n/(div[i]*div[i-1]);

        if(tmp*(div[i]*div[i-1]) == n)
      
          ans.push_back(2*(div[i]*div[i-1])+2*(div[i]*tmp)+2*(div[i-1]*tmp));
          if(max(div[i],div[i-1])%min(div[i],div[i-1])==0 and div[i-1]*div[i-1]== n)
                {
                     ans.push_back(2*(div[i-1]*div[i-1])+4*(div[i-1]*(max(div[i],div[i-1])/min(div[i],div[i-1]))));
                    //  cout<<div[i]<<" "<<div[j]<< " "<<2*(div[i]*div[i])+4*(div[i]*(max(div[i],div[j])/min(div[i],div[j])))<<endl;
                }
    }
   
    sort(ans.begin(), ans.end());
    cout<<ans[0]<<endl;


}
   
 
 int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}