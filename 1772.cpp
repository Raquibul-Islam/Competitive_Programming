#include<bits/stdc++.h>
using namespace std;
void solve()
{

    string ss;
    int n,m;
    vector<string>v;
    vector<string>vv;
    map<string,string>mp;
    cin>>n>>m;
    for(int i=0;i<2*m+n; i++)
    {
         cin>>ss;
         v.push_back(ss);
    }
    for(int i=1;i<2*m; i=i+2)
    {
        string v1 = v[i];
        string v0 = v[i-1];
        if(v1.size()>=v0.size())
        {
            mp[v[i]]= 1 ;
            mp[v[i-1]]= 2;
        }
        else
        {
           mp[v[i]]= 2 ;
           mp[v[i-1]]= 1;
        }



    }

  for (int k=s.size()-n; k<s.size(); k++)
  {
      if(mp[s[i]]==1)
        v[i]=s[i];
      else
      {

      }
  }
  for(int i=0;i<n; i++)
  cout<<vv[i]<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
