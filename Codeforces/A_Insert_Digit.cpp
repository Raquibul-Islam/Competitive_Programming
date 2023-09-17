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
    ll n,d,num,c=0;
    Vector v;
    cin>>n;
    cin>>d;
    string s;
    cin>>s;
    for (int i=0; i<n; i++)
    {
        if(s[i]-48<d and c==0)
        {
            v.push_back(d);
            v.push_back(s[i]-48);
            c++;
        }
        
        else
        v.push_back(s[i]-48);
    }
    if(c==0)
    v.push_back(d);
    for(int j=0; j<v.size(); j++)
    cout<<v[j];
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