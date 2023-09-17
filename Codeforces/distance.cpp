#include<bits/stdc++.h>
using namespace std;
void solve()
{

   long long int n;
   cin>>n;
   int arra[n];
   for (int i=0; i<n; i++)
        cin>>arra[i];
    sort(arra,arra+n);
    cout<<arra[1]-arra[0]<<" "<<arra[n-1]-arra[0]<<endl;
    for (int j=1; j<n-1; j++)
    {
       cout<<min(abs(arra[j]-arra[j-1]),abs(arra[j]-arra[j+1]))<<" "<<max(arra[j]-arra[0],arra[n-1]-arra[j])<<endl;
    }
     cout<<arra[n-1]-arra[n-2]<<" "<<arra[n-1]-arra[0]<<endl;

}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
