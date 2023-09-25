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
    ll n, w, psum, ans, cnt=0;
    cin>>n>>w;
    ll arr[n+1];
    ll psa [n+2];

    for (int i=0; i<n; i++)
        cin>>arr[i];
    

    sort(arr, arr+n);
    psum = 0;
    psa[0] =  arr[0];

    for (int i=1; i<n; i++)
    {
        //cout<<psum<<endl;

        psum+=((arr[i]-arr[i-1])*i);
        psa[i-1]= psum;
        
        if(w<=psum)
    {
         ans = i-1;
        cnt ++;
        break;
    }
        
         
    }
 if(cnt!=0)
 {
    cout<<ans<<endl;
    return;
 }
 else
 {
    ll tmp = arr[n-1];
     ans  = arr[n-1];
    if(arr[n-1]<w)
    {
        while(tmp<w)
        {
            tmp = tmp+n;
            ans++;
        }
            
        
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