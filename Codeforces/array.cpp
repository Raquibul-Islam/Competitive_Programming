#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n>2)
        cout<<2*m<<endl;
    else if(n==1)
    {
        cout<<"0"<<endl;
        return;
    }

    else
        cout<<m<<endl;




}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
