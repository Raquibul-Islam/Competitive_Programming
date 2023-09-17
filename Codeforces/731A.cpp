#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,res=0,ans;
    string s;
    cin>>s;

    for (int i=1; i<s.size(); i++)
    {

        int rem = abs((int)s[i]-(int)s[i-1]);
        ans = min(abs(rem),abs(26-rem));
        res+=ans;

    }
    int tmp = abs((int)'a'-(int)s[0]);
    res += min(abs(tmp),abs(26-tmp));
    cout<<res<<endl;
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
