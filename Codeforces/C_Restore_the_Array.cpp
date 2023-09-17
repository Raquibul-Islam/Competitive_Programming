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
    ll n,c=0,s;
    Vector v;
    Vector v1;
   cin>>n;
   for(int i=0; i<n-1; i++)
   {
       cin>>s;
      v.push_back(s);
      
   }

   for(int i=1; i<v.size()+1; i++)
     {
        if(v[i]>v[i-1] and c==0)
        {
            
            v1.push_back(0);
            v1.push_back(v[i-1]);
            c++;
           
        }
        
        else{
        
            v1.push_back(v[i-1]);

        }
     }
     if(c==0)
     {
        v1.push_back(0);
        v1.push_back(v[0]);
     }
   if(v1[v1.size()]<v1[v1.size()-1])
   {
    int x= v1[v.size()];
        v1.pop_back();
        v1.pop_back();
        v1.push_back(x);
        v1.push_back(x);
   }
   cout<<v1[0];
   for (int ii=1; ii<v.size()+1; ii++)
   cout<<" "<<v1[ii];
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