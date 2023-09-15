//بسم الله الرحمن الرحيم
//Author : Rakibul Islam  
#include<bits/stdc++.h>
#include <numeric>
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
  
void solve( vector<bool> isprime)
 {   
    
    ll n, num1,num2,a,b;
    cin>>n;
    if(n==1)
     cout<<6<<endl;

     
     else{
        if(n%2)
        {
            num1 = 2+n;
            num2 = num1+n;
        }
        else
        {
            num1 = 1+n;
            num2 = num1+n;

        }
               for(int i=num1; i<1e6; i++)
               {
                if(isprime[i])
                {
                    a = i;
                    cout<<a<<endl;
                    break;
                }
                 
               }
               for(int i=num2; i<1e6; i++)
               {
                if(isprime[i])
                {
                    b = i;
                   cout<<b<<endl;
                    break;
                }
                 
               }
               cout<<a*b<<endl;
        
     }


   
    
 }

int main()
 {
      fast;    
      int t=1;
      
     
   
     int n = 9e5;
    vector<bool> isprime(n + 1, true); 
    for (int p = 2; p * p <= n; ++p) {
        if (isprime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isprime[i] = false;
                
            }
        }
    }
    cin>>t;
  
      while(t--)
      solve(isprime);
 }