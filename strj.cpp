#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,zero=0,one;
   cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if((int)s[i]-48==0)
            zero++;
            //cout<<(int)s[i]-48<<endl;
    }
    cout<<abs(zero-(n-zero))<<endl;

}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
