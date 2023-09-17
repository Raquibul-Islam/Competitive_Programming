#include<bits/stdc++.h>
using namespace std;
void solve()
{
   string s;
   int c=0;
   char ch;
   cin>>s>>ch;
   for(int i=0; i<s.size(); i=i+2)
   {
        if(s[i]==ch)
        {
            c++;
            break;
        }
   }
  if(c!=0)
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
