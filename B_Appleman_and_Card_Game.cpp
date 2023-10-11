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

     ll n,k,ans=0, l=0;; cin>>n>>k;
     string s; cin>>s;
     map<char,ll>mp;
     for(int i=0 ; i<n ; i++){
        mp[s[i]]++;
     }
     vector<pair<char, ll>>vp;
     for(auto it : mp){
        vp.pb(make_pair(it.second, it.first)) ;
       
     }
     sort(vp.begin(), vp.end());
      for(auto it : vp){
        cout<<it.first<< " "<<it.second<<endl;
     }
     while(k>0){
        ll rem = vp[l].second;
        ll tmp = min(k, rem);
        k-=tmp;
        l++;
        ans+=(tmp*tmp);
     }
     cout<<ans<<endl;
}
 
 
int main()
{
     fast;    
     int t=1;
     //cin>>t;
     while(t--)
     solve();
}







// //بسم الله الرحمن الرحيم
// //Author : Rakibul Islam 
// #include<bits/stdc++.h>
// using namespace std;
 
// #define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define     inn             cin>>n
// #define     ins             cin>>s
// #define     nl              endl
// #define     ll              long long int
// #define     Pair            pair<ll,ll>
// #define     F               first
// #define     S               second
// #define     all(v)          v.begin(),v.end()
// #define     Max             99999999999999999999
// #define     Min             -1000000000000000014
// #define     mod             1000000007
// #define     range           100007
// #define     pb              push_back
// #define     Vector          vector<ll>
// #define     PI              3.1415926535897
 
//  //--------------------RAW CODE--------------------
  
// void solve()
// {

//      ll n,k,ans=0, l=0;; cin>>n>>k;
//      string s; cin>>s;
//      map<char,ll>mp;
//      for(int i=0 ; i<n ; i++){
//         mp[s[i]]++;
//      }
//      vector<pair<char, ll>>vp;
//      for(auto it : mp){
//         vp.pb(make_pair(it.first, it.second)) ;
       
//      }
//      sort(vp.begin(), vp.end());
//       for(auto it : vp){
//         cout<<it.first<< " "<<it.second<<endl;
//      }
//      while(k>0){
//         ll rem = vp[l].first;
//         ll tmp = min(k, rem);
//         k-=tmp;
//         l++;
//         ans+=(tmp*tmp);
//      }
//      cout<<ans<<endl;
// }
 
 
// int main()
// {
//      fast;    
//      int t=1;
//      //cin>>t;
//      while(t--)
//      solve();
// }