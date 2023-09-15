#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;N
    if(n%2==0)
        for(int i=1; i<=n; i=i+2)
            cout<<i+1<<" "<<i<<" ";

    else
    {
        if(n!=1)
        {
            cout<<3<<" "<<1<<" "<<2<<" ";

            for (int j=4; j<=n; j=j+2)
            {
                cout<<j+1<<" "<<j<<" ";

            }
        }
        else
            cout<<1<<endl;
    }
    cout<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
