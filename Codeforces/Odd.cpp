#include<bits/stdc++.h>
using namespace std;
void solve()
{

   int n,even=0,x;
   cin>>n;
   for(int i=1; i<=2*n; i++)
   {
       cin>>x;
       if(x%2)
        even++;
   }
   if(even==n)
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
