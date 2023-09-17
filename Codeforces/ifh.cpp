#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long int a,b,c;
    cin>>a>>b>>c;
   int d1= abs(a-1);
   int d2 = abs(b-c)+abs(c-1);
   if(d1<d2)
    cout<<1<<endl;
   else if(d1==d2)
   {
       cout<<3<<endl;
       return;
   }

   else
    cout<<2<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
