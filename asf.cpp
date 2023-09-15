#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,sum,sum1,x;
   for(int i=0;i<n;i++){
       cin>>x;
    if(x%2==0)
        sum+=x;
        else
            sum1+=x;
   }

   if(sum>sum1)
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
