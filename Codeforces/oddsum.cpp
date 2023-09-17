#include<bits/stdc++.h>
using namespace std;
void solve()
{

   int n,x,ans=0;
   cin>>n;
   for (int i=0; i<n; i++)
   {
       cin>>x;
       ans+=x;
   }
  // cout<<ans<<endl;
   if (ans%2==0)
   cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
