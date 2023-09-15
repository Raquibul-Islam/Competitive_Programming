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
    ll n,k,sum=0,ans,x;
         ll beg = 0LL; 
         ll end = 1e9;
    cin>>n>>k;
    Vector v;
    for (ll i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
         while(beg<=end)
           {
            sum=0LL;
           ll  mid  = (beg+end)/2LL;
            
             for (ll i=0; i<n; i++)
             {
                //cout<<v[i]+tmp<<endl;
                sum+=((v[i]+2*mid)*(v[i]+2*mid));
                if(sum>k)
                break;
                
               //cout<<sum<<endl;
            
             }
             if(sum<k)
                beg = mid+1LL;
                
            else if(sum==k)
             {
                 cout<<mid<<endl;
                 break;
             }
             else
             end = mid-1LL;

             mid = (beg+end)/2LL;
             //cout<<sum<<endl;

              
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