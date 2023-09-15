#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,zero=0,one=0;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                zero++;
            if(a[i]==1)
             one++;
        }

        if(zero<=(n+1)/2)
            cout<<0<<endl;
        else if(zero+one!=n || one==0)
         cout<<1<<endl;
        else cout<<2<<endl;


}

int main()
{
    int t=1;
cin>>t;
    while(t--)
        solve ();




}
