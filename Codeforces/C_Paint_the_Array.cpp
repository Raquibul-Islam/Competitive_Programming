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
 
 ll find(ll a, ll b)
 {
    if(b==0)
    return a;
    else
    return find(b, a%b);
 }
 ll findgcdeven(ll arr[], int n)
  {
    ll result = arr[1];
     for(int i=1; i<n; i=i+2)
     {
         result = find(result, arr[i]);
     }
     return result;

  }
  ll findgcdodd(ll arr[], int n)
  {
    ll result = arr[0];
     for(int i=0; i<n; i=i+2)
     {
         result = find(result, arr[i]);
     }
     return result;

  }
void solve()
 {

    ll n,cnt=0;
    cin>>n;
     ll arr[101];
     for(ll i=0; i<n; i++)
      cin>>arr[i];
    
    ll even  = findgcdeven(arr, n);
//wcout<<"even"<<even<<endl;
    
   for(int i=0; i<n; i=i+2)
   {
     if(arr[i]%even==0)
     {
         cnt++;
         break;
     }
    
    // cout<<"f"<<arr[i]%even<<endl;
   }
   if(cnt==0)
   {
     cout<<even<<endl;
     return;
   }
     cnt=0;
    ll odd  = findgcdodd(arr, n);
      //cout<<"odd"<<odd<<endl;
     for(int i=1; i<n; i=i+2)
   {
     if(arr[i]%odd==0)
     {
         cnt++;
         break;
     }
    
     //cout<<"f"<<arr[i]%odd<<endl;
   }
   if(cnt==0)
   {
     cout<<odd<<endl;
     return;
   }
   else
   cout<<0<<endl;

 }
 
int main()
 {
      fast;    
      int t=1;
      cin>>t;
      while(t--)
      solve();
 }