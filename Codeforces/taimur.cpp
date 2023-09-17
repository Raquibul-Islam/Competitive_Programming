#include<bits/stdc++.h>
using namespace std;
void solve()
{

    string s,ss;
    int c=0,n;
    cin>>n;
    ss= "Timur";
    cin>>s;
    if (s.size()==5)
    {
       for(int i=0; i<5; i++)
       {
           for(int j=0; j<5; j++)
           {
               if(s[j]==ss[i])
               {
                   c++;
                   break;
               }

           }
       }
       if(c==5)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
    else
    {
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
