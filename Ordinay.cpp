#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,ans=0,i=1,temp=0,j=9;
    cin>>n;


      while(j--)
      {
           temp=0;
           while(temp<=n)
           {
               temp  = temp*10+i;
               ans++;
           }
           i++;
       }




    cout<<ans-9<<endl;



}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
