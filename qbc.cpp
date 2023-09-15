#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    int mx = max({a,b,c});
     if((mx==a && mx ==b) || (mx==a && mx==c) || (mx==b && mx==c))
     {
         if(mx==a && mx==b && mx==c)
         {
             cout<<"YES"<<endl;
              cout<<a<<" "<<a<<" "<<a<<endl;
         }

            else{
                if(mx ==a && mx==c)
                {
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<b<<" "<<b<<endl;
                }


                else if(mx==a && mx==b)
                {
                   cout<<"YES"<<endl;
                  cout<<a<<" "<<c<<" "<<c<<endl;
                    return;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<a<<" "<<b<<endl;
                }

            }

     }
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
