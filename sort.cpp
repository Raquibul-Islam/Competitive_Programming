#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n,ans=1,c=1,x;
    map<int,int>mp;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
   // sort(v.begin(),v.end());
    for(int i=1; i<n; i++)
    {
        if(v[i]-v[i-1]>=1)
            c++;
        else
        {
            if(ans<c)
                ans= c;
            c=1;
        }

    }
    if(ans<c)
        ans = c;
   cout<<ans<<endl;



}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
