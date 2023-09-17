#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,x,od=0;
    vector<int>v;
    vector<int>v1;
      v1.push_back(0);
    cin>>a>>b;
    for (int i=0;i<a; i++)
    {
        cin>>x;
        v.push_back(x);
        if(x%2!=0)
        od++;
        v1.push_back(od);
    }

    while(b--)
    {
        long long int l,h,vv,temp=0,ood;
        cin>>l>>h>>vv;
        if(vv%2!=0)
        temp = ((h-l)+1);
        ood = (v1[h]-v1[l-1]);
       // cout<<temp<<endl;
           // cout<<od<<endl<<ood<<endl<<temp<<endl;

        if((od+temp-ood)%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
