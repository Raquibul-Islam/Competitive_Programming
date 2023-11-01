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
    ll n,i;
    cin>>n;
    string v;
    cin>>v;
    ll v1[n+1],v2[n+1];   
    for (i=0; i<n; i++)
    {
        if(v[i]=='2')
        {
            v1[i]=1;
            v2[i]=1;
        }
        if(v[i]=='0')
        {
            v1[i]=0;
            v2[i]=0;
            
        }
        if(v[i]=='1')
        {
                v1[i]=0;
                v2[i] = 1;
                i++;
            while(i<n)
            {
                v1[i]= v[i]-48;
                v2[i] = 0;
                i++;
            }
        }
    }
    for(int ii=0; ii<n; ii++)
    cout<<v1[ii];
    cout<<endl;

    for(int ii=0; ii<n; ii++)
    cout<<v2[ii];
    cout<<endl;

   

    
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}