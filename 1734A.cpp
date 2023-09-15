#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,j=0,x;
    vector<int>v;
    vector<int>v1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

        sort(v.begin(),v.end());


     for(int i=n-1; i>=0; i--)
     {
         if(i<2)
            break;
        v1.push_back((v[i]-v[i-1])+(v[i-1]-v[i-2]));

     }

     sort(v1.begin(),v1.end());
     cout<<v1[0]<<endl;



}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
