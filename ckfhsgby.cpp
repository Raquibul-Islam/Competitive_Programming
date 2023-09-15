#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,ans,i;
    map<int,int>mp;
    vector<int>v;
    vector<int>v1;
    cin>>n;
    for (int k=0; k<n ; k++)
    {
        cin>>x;
        mp[x]++;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    for(int ii=1; ii<n-1; ii++)
    {
        v1.push_back(v[ii]+v[ii-1]);
    }
    for (i=v1[0]; i<v1[v1.size()-1]+1; i++)
    {
        //cout<<mp[i]<<endl;
        if (mp[i]<=n-mp[i]+1)
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
