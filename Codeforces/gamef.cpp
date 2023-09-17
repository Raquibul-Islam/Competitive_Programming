#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b,temp;
    cin>>n>>a>>b;
    temp = n;
    while(a--)
    {
        if((n/2)+10>=temp)
            break;
        else
        n=(n/2)+10;
    }
     if (n-(b*10)<=0)
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
