#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c=0,x,mn,mx;
    vector<int>v;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
       v.push_back(x);
    }
        for (int i=1; i<n; i++)
        {
            mn =min(v[i],v[i-1]);
            mx =max(v[i],v[i-1]);
            if (mn*2<mx)
            {

               while(mx>mn*2)
               {
                   mn=mn*2;
                   //cout<<mn<<endl;
                   c++;

               }


            }
        }
        cout<<c<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
