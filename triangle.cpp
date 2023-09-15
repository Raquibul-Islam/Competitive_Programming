#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b>c || a+c>b || b+c>a)
        cout<<a<<" "<<b<<" "<<c<<endl;
    else if(a+b>d  || a+d>b || b+d>a)
    {
        cout<<a<<" "<<b<<" "<<d<<endl;
        return;
    }

    else
        cout<<b<<" "<<c<<" "<<d<<endl;
}
int main()
{

    int t;
     cin>>t;
     while(t--)
        solve();



}
