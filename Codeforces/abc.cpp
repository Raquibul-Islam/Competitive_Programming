#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  int na=0,nb=0,nc=0;
  cin>>s;
  for (int i=0; i<s.size();i++)
  {
      if(s[i]=='A')
        na++;
      if(s[i]=='B')
        nb++;
      if(s[i]=='C')
        nc++;
  }
  //cout<<na<<nb<<nc<<endl;
  if((na !=0 && nb==0 && nc==0) || (na ==0 && nb!=0 && nc==0) || (na ==0 && nb==0 && nc!=0))
  {
     // cout<<"HI"<<endl;
     cout<<"NO"<<endl;
  }

  else
  {
      if((na+nc ==nb) || (na==nb and nc==0) ||(nb==nc and na==0) )
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
