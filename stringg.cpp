#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n,a,b,i=1;
     string s="";
     cin>>n>>a>>b;
     for(char a2='a'; i<=n; a2++)
     {

         if(i%b==0)
         {
             s+=a2;
             a2='`';
         }
         else
            s+=a2;

             i++;
     }
     cout<<s<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
