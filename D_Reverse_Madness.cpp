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
 
 //--------------------RAW CODE-------------------
void solve()
 {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    Vector vl(k), vr(k);
    for (int ii=0; ii<k; ii++)
       cin>>vl[ii];
    for (int ii=0; ii<k; ii++)
       cin>>vr[ii];
     bitset<1000000>bst;
       ll q,m,a,b;
       cin>>q;
       ll jj=0;
       while(q--)
       {
          cin>>m;

          for (int jj=0; jj<k; jj++)
          {
         
             if(m >= vl[jj] and m <= vr[jj] )
             {
                a = min(m,vr[jj]+vl[jj]-m);
                b = max(m,vr[jj]+vl[jj]-m);
                //cout<<a<<" "<<b<<endl;
                reverse(s.begin()+a-1, s.begin()+b);
               // cout<<s<<endl;
               bst[jj]=1;
                break;

             
             

            }

          }

       }
       cout<<s<<endl;

 }
 
int main()
 {
      fast;    
      int t=1;
      cin>>t;
      while(t--)
      solve();
 }