#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long int x;
    vector<long long int>v;
    for(int i=0; i<3; i++)
    {
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    cout<<v[1]<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
