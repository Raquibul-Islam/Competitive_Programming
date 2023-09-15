#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n,temp,i=0,ans;
   cin>>n;
   temp=n;
   while(temp!=0)
   {
        i++;
      // cout<<temp<<" "<<i<<endl;
       temp &= (temp-i);
       cout<<temp<<endl;

       if(temp==0)
        ans= i;



   }
cout<<n-ans<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
