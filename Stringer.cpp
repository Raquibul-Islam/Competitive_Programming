#include<bits/stdc++.h>
using namespace std;
void solve()
{
     string s,s1;
     int ans=0;
     cin>>s>>s1;
      vector<int>v;
      map<char,int>mp;
     for(int i=0; i<s.size();i++)
     {
         mp[s[i]]=i+1;
     }


     for(int i=1; i<s1.size();i++)
     {
         ans+=abs(mp[s1[i]]-mp[s1[i-1]]);
     }
  cout<<ans<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
