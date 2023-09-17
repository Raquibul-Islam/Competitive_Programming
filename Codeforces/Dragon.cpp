#include<bits/stdc++.h>
#define ull unsigned long long
#define fast ios_base::sync_with_stdio(false),cout.tie(0),cin.tie(NULL)

using namespace std;
int main()
{
    fast;
    int s,n,c=0,p;
    cin>>s>>n;

    vector<pair<int ,int> > pa;
    for (int j=1; j<=n; j++)
    {
        int x,y;
        cin>>x>>y;
        pa.push_back(make_pair(x,y));


    }
    sort(pa.begin(),pa.end());
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<pa[i].first<<" "<<pa[i].second<<endl;
    }
    for (int i=0 ; i<n; i++)
    {
           if (pa[i].first < s)
           {
               s=s+pa[i].second;
           }
        else
        {

            ++c;
            break;
        }
    }
    if (c==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


    return 0;
}
