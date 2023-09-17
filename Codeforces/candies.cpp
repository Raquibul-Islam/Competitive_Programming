#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n,sum=0,x;
    cin>>n;
    vector<long long int >v;

    for (int i=0;i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=1; i<n; i++)
    {
        sum+=v[i]-v[0];
    }
    cout<<sum<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
