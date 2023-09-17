
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,i=0,j,c=0;
  cin>>n;
  j=n-1;
  string s;
  cin>>s;

  while(i!=j and i<=j)
  {
      if((s[i]-48==0 and s[j]-48==1) or (s[i]-48==1 and s[j]-48==0))
      {
          c=c+2;
          j--;i++;

      }
      else
        break;
  }
   cout<<n-c<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
