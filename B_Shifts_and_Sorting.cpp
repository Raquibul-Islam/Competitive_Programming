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
    int ans=0,onee=0;
    cin>>s;
    vector<int>one;
    vector<int>zero;
    int n = s.size();
    for(int i=0; i<s.size(); i++)
    {
       if(s[i]=='1')
       {
          one.push_back(i);
          onee++;
       }
         
         else
         zero.push_back(i);
    }
    reverse(zero.begin(), zero.end());
      int ii=0;
    for (int i=0; i<n-onee; i++)
    {
        if(s[i]=='1')
       {
           ans+=(abs(zero[ii]-one[ii])+1);
           //cout<<zero[ii]<< " "<<one[ii]<<endl;
           
           ii++;
       }
    }
    if ( ans==2)
    {
        cout<<ans<<endl;
    return;
    }
    
    if(ans==0)
    cout<<ans<<endl;
    else
    cout<<ans+1<<endl;
    
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}