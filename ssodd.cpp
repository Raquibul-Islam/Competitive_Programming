#include<bits/stdc++.h>
using namespace std;
void solve()
{

   int n,x,ans=0,ev=0,od=0;
   cin>>n;
   for (int i=0; i<n; i++)
   {
       cin>>x;
       ans+=x;
       if(x%2==0)
       ev++;
       else
        od++;

   }
  // cout<<ans<<endl;
   if (ans%2!=0)
   cout<<"YES"<<endl;
   else
   {
       if(ev>=1 && od>=1)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"No"<<endl;
   }


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
