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
    ll a,b,c,sum=0;
    ll cnt=0;
   cin>>a>>b>>c;
    ll arr[5];
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
   sort(arr, arr+3);
   //cout<<arr[0]<<arr[1]<<arr[2]<<endl;
   if(arr[0] == arr[1] || arr[0]== arr[2])
   {
       if(arr[0]==arr[1])
         arr[1]=-1;
        if(arr[0]==arr[2])
         arr[2]= -1;
   }

   ll f = arr[0]+arr[0];
   ll s = f+arr[0];
   ll t = s+arr[0];
    if(f == arr[1] || f == arr[2])
   {
       if(f==arr[1])
         arr[1]=-1;
        if(f==arr[2])
         arr[2]= -1;
   }
    if(s == arr[1] || s== arr[2])
   {
       if(s==arr[1])
         arr[1]=-1;
        if(s==arr[2])
         arr[2]= -1;
   }

     if(t == arr[1] || t== arr[2])
   {
       if(t==arr[1])
         arr[1]=-1;
        if(t==arr[2])
         arr[2]= -1;
   }


     if(arr[1]== -1 and arr[2]== -1)
   {
      cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;

    
    
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}