#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin>>n;
    if(n==1)
        cout<<"-1";
    else{
         int  ev =2;
         int od =1;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<od<<" ";
            od +=2;
        }

     else
     {
         cout<<ev<<" ";
            ev +=2;

     }

    }
    }
 cout<<endl;
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
