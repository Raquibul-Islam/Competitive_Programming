#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,x,tmp=0;
   cin>>n;
   map<int,int>mp;

   for (int i=0; i<n; i++)
   {
       cin>>x;

       mp[x]++;
       if(mp[x]==3)
        tmp = x;
   }
   if(tmp==0)
    cout<<-1<<endl;
   else
   cout<<tmp<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
