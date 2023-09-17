#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n,temp,rem,a=2,r=2;
   cin>>n;
   temp = a*(pow(r,n)-1);
  // cout<<temp<<endl;
   rem = a*(pow(r,(n/2)-1)-1) + pow(2,n);
   //cout<<rem<<endl;
   cout<<rem - (temp-rem)<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
