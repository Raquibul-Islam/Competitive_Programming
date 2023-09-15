#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x;
  set<int>s;
  cin>>n;
  for(int i=0;i<n; i++)
  {
      cin>>x;
      s.insert(x);
  }
   if(s.size()==n)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
