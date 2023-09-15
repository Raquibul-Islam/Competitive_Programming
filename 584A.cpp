#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n,t;
    cin>>n>>t;
    if (n==1 and t==10)
        cout<<"-1";
    else{
        if(t!=10)
        {
            for (int i=1;i<=n;i++)
            {
                cout<<t;
            }
        }
        else{
            cout<<1;
           for (int i=1;i<n;i++)
            {
                cout<<0;
            }
        }
    }
    cout<<endl;

}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
