#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);

    }
    cout<<s.size()<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
