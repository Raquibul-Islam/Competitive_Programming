//بسم الله الرحمن الرحيم
//Author : Rakibul Islam 
#include<bits/stdc++.h>
using namespace std;
 
#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)

 
 //--------------------RAW CODE--------------------
const int n = 10;
void solve()
{

     
    vector<int> coprime(n + 1, 1); 

    for (int i = 2; i <= n; ++i) {
        if (coprime[i] == 1) {
            for (int j = 2; j <= i; j += i) {
                coprime[j] = 0; 
            }
        }

  }
  for (int i=0; i<coprime.size(); i++)
  cout<<coprime[i]<<" "<<i+1<<endl;
   
}
 
int main()
{
     fast;    
     int t=1;
     //cin>>t;
     while(t--)
     solve();
}