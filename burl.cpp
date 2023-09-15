#include<bits/stdc++.h>
using namespace std;
void solve()
{

   int a,b;
   cin>>a>>b;
   if(a==0)
   {
       cout<<1<<endl;
       return;

   }
   else  if(b==0)
   {
       cout<<2*b+1<<endl;
       return;

   }
   else
   {
       cout<<2*b+1+a<<endl;
   }

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
