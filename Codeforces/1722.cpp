#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,c=0;
   cin>>n;
   string s,s1;
   cin>>s>>s1;
    for(int i=0; i<n; i++)
    {
        if ((s[i]=='R' && (s1[i]=='G'|| s1[i]=='B')) || (s1[i]=='R' && (s[i]=='G' || s[i]=='B')))
            {
                c++;
                break;
            }



    }
    if (c!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
