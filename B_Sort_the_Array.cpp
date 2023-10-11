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
    ll n,cnt=0;
    cin>>n;
    ll arr[n], tmp[n]; 
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
        tmp[i] = arr[i];
    }
    
    sort(tmp, tmp+n);
    ll low= -2, high = -2;
    for (ll i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1] and (low == -2))
         low = i-1;

         if(arr[i]>arr[i-1] and (high == -2))
          high = i-1;

         if((high == -2) and (low != -2) and (i == n-1))
             high = n-1;
    }
    if(low == -2)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
    cout<<low<<" "<<high<<endl;

    reverse(arr+low, arr+high+1);
     for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
     for (int i=0; i<n; i++)
    {
        if(arr[i]!=tmp[i])
        {
             cnt++;
             break;
        }
    }
    if(cnt!=0)
    {
        cout<<"no"<<endl;
        return;
    }
    else
    {
             cout<<"yes"<<endl;
            
            cout<<low+1<<" "<<high+1<<endl;
              
    }

    
}
 
int main()
{
     fast;    
     int t=1;
    // cin>>t;
     while(t--)
     solve();
}