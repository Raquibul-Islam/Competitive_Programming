#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s,ss;
    int c=0;
    cin>>s;
    vector<char>arra;
    char first,second;
    first  = s[0];
    second = s[1];
    for(int i=0; i<5; i++)
    {
        cin>>ss;
        for(int i=0; i<2; i++)
        {

            arra.push_back(ss[i]);
        }

    }
  for (int i=0; i<10; i++)
  {
      if(arra[i]==first || arra[i]==second)
      {
          c++;
          break;
      }
  }


if (c!=0)

    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
