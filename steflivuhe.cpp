#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,i=1,x,j,c=1,d=1;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    j= v.size()-1;
    while(1)
    {
        if(v[0]==v[i])
        {
            c++;
            i++;
        }

        else
            break;
    }
    while(1)
    {
        if(v[v.size()-1]==v[j-1])
        {
             d++;
             j--;
        }

        else
            break;
    }
    if (c==0 && d==0)
        cout<<2<<endl;
    else
    cout<<(2*c+2*d)-2<<endl;

}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve();
    }
 
