#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n,k;
   cin>>n>>k;


       if((n%2==0 and k%2==0 and (k*k)<=n) || (n%2!=0 and k%2!=0 and (k*k)<=n))
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;



}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
