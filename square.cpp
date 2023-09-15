#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long int n,a,b,c;
    cin>>a>>b>>c;
    int mx = max ({a,b,c});
    int mn = min({a,b,c});
    b = (a+b+c)-(mx+mn);
    a=mn;
    c = mx;
     if ((a+b+c)%2!=0)
        cout<<"NO"<<endl;
     else
     {
         if((a==b and c%2==0) || (b==c and a%2==0) || (a+b)==c || b+c==a)
            cout<<"YES"<<endl;
         else
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
