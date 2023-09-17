#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long int a,b,c;
    double mn,maxx;
    cin>>a>>b>>c;
        mn = 1.0;
        maxx = (double)max(a,b)/(double)min(a,b);
    if(abs(maxx-mn)<=(double)c)
        cout<<"YES"<<endl;
    else
    {
            cout<<"NO"<<endl;
    }

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
