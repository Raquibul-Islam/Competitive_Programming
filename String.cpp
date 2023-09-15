#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long int n;
  set<char>s1,s2;
  vector<int>v;
  cin>>n;
  string s;
  cin>>s;
  //cout<<s1.size()<<endl;


      for( int i=n-1; i>=0; i--)
      {

        s1.insert(s[i]);
          v.push_back(s1.size());

      }
      //cout<<"s1"<<" "<<i<<" "<<s1.size()<<endl;

         int ans =0;
         for( int i=0; i<n-1; i++)
      {

          s2.insert(s[i]);
          int temp = s2.size();
          //cout<<v[n-2-i]<<" "<<temp<<endl;
          ans=max(ans, temp+v[n-2-i]);


      }
      //cout<<"s1"<<" "<<i<<" "<<s1.size()<<endl;




           cout<< ans<<endl;




}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
