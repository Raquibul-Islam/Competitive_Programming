#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,ev=0,sum=0;
    cin>>n;
    vector<int>v;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
            ev++;
        else
            v.push_back(x);

    }
    for(int i=0; i<ev; i++)
        sum+=(n-i+1);
    for (int j=0; j<v.size(); j++)
    {


        for(int k=j+1; k<v.size(); k++)
        {
            if (v[k]%v[j]==0)
                sum++;
        }
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
