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

 bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    if (n <= 3) {
        return true; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; 
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; 
        }
    }

    return true; 
}

void solve()
{
    
    ll n,i,scnd,third;
    cin>>n;
    if(n==1)
    {
        cout<<6<<endl;
        return;
    }
     if(n%2)
      i = n+2;
     else
     i = n+1;
     for ( ; ; i+=2)
     {
        if(isPrime(i)==true)
        {
              scnd = i;
             break;
        }
       
     }
     i = i+2;
       for ( ; ; i+=2)
     {
        if(isPrime(i)==true)
        {
              third = i;
             break;
        }
       
     }
      cout<<scnd*third<<endl;
}
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}