#include<bits/stdc++.h>
using namespace std;
void solve()
{
  stack<char>s1;
   int n,c=0;
   string s;
   cin>>n;
   cin>>s;
   for (int i=0; i<n; i++)
   {
       if (s[i]=='(')
            s1.push(s[i]);
       else
       {
           if (!s1.empty())
                 s1.pop();


       }

   }
   cout<<s1.size()<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
