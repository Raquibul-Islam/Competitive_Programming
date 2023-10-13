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
   ll arra[5];
   ll arrb[5];
  for (int i=0; i<3; i++)
       cin>>arra[i];
    for (int i=0; i<3; i++)
       cin>>arrb[i];
     sort(arra, arra+3);
    ll alice  = arra[2]*100+arra[1]*10+arra[0]; 
    //cout<<alice<<endl;
   
      
      sort(arrb, arrb+3);
     ll bob  = arrb[2]*100+arrb[1]*10+arrb[0]; 



    if( alice == bob)
    {
         cout<<"Tie"<<endl;
        

    }
     if(alice>bob)
    {
         cout<<"Alice"<<endl;
       

    }
    
    
   if(alice<bob)
    {
         cout<<"Bob"<<endl;

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