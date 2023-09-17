#include<bits/stdc++.h>
using namespace std;
void solve()
{
     string s= "codeforces";
     int c=0;
     char ch;
     cin>>ch;
     for(int i=0; i<s.size();i++)
     {
         if(ch==s[i])
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
