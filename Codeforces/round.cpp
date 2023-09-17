#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n,temp,rem=1;
   cin>>n;
   temp = n;
   while(temp!=0 )
   {

       temp=temp/10;
       rem*=10;
   }
   //cout<<rem<<endl;
   cout<<abs((rem/10)-n)<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
