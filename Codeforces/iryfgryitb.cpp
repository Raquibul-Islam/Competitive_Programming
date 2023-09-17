#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long int x,y,a,b,sub;
    cin>>x>>y>>a>>b;
    if(y>b || (x<a and (y+abs(x-a))>b))
        cout<<-1<<endl;
    else
    {
        sub = b-y;
        x = x+sub;

        cout<<sub+(x-a)<<endl;

    }

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
