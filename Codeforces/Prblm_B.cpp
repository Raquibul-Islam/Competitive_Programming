#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,d,vd,mw,x,cnt=1,ans=0;
    vector<int>v;
    cin>>n>>d>>vd>>mw;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
     int temp = v[0]+mw;
    for (int i=1; i<v.size(); i++)
    {
        //cout<<cnt<<endl;

        if(temp+vd < v[i] || cnt%d==0)
        {
            ans++;
            temp = v[i]+mw;
        }
         ++cnt;


    }
     cout<<ans+1<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
