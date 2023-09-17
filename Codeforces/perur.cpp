#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n,x,k;
    vector<int>v;
    cin>>n>>k;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[n-1]<=k )
    {
        cout<<"YES"<<endl;
        return;
    }

    else if(v[n-1]>k and v[0]+v[1]<=k)
    {
        cout<<"YES"<<endl;
        return;
    }

    else
        cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
