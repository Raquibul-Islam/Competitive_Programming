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
  string s,ss="";
  cin>>s;
  ll cnt=0;
  ss=s;
  sort(ss.begin(), ss.end());
  if(s==ss)
  {
    cout<<1<<endl;
    return;
  }
  for (int i=1; i<s.size(); i++)
  {
    if(s[i]!=s[i-1])
    cnt++;
  }
  if(cnt==1)
  cout<<cnt+1<<endl;
  else
  cout<<cnt<<endl;



}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}