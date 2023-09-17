#include<bits/stdc++.h>
#define ul unsigned long long int
using namespace std;
solve()
{
    map<string,ul>s;
    string ss;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>ss;
        if (s[ss]==0)
        {
            cout<<"OK"<<endl;
            s[ss]++;
        }

        else
        {
           cout<<ss<<s[ss]<<endl;
              s[ss]++;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}
