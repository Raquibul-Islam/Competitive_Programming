#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,ans,i=0,c=0;
    map<int,int>mp;
    set<int>v;
    cin>>n;
    for (int k=0; k<n ; k++)
    {
        cin>>x;
        mp[x]++;

    }
    for ( i=0; i<n; i++)
    {

        if (mp[i]<=(n+1)/2)
        {
            ans = i;
            break;
        }

    }
    cout<<i<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
