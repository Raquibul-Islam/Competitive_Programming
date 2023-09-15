#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,x,c=1;
   cin>>n>>x;
   int temp = 2;
while(temp<n)
{
    //cout<<temp<<endl;
    temp+=x;
    //cout<<c<<endl;
    c++;

}

 cout<<c<<endl;

}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve();


}
