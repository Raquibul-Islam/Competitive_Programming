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
    
   ll n;
   cin>>n;
   Vector arr(n+1), arra(n+1);

   for (int i=1; i<=n; i++)
   {
     cin>>arr[i];
   }
  
   if(arr[1]!=n)
   {
    cout<<"NO"<<endl;
     return;
   }
   for(ll i = 1 ; i <= n ; i++) {
            arra[arr[i]]++;
         }
         for(ll i = n-1 ; i >= 1 ; i--) {
            arra[i] += arra[i+1];
         }
         if(arra == arr)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;;
     
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}