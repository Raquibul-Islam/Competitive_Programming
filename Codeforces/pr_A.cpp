#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,m,x,y;
   cin>>m>>n;
   x = abs(m);
    y =  abs(n);
   int mx= max(x,y);
   int mn= min(x,y);
   if (mx>mn)
    cout<<mx*2-1<<endl;
    else if(x==0 && y==0)
    {
        cout<<0<<endl;
        return;
    }
   else
    cout<<mx*2<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
