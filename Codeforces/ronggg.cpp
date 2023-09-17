#include<bits/stdc++.h>
using namespace std;
void solve()
{

    string s;
    int c=0;
    map<int, int >mp;
    set<int>se;
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        se.insert(s[i]);
        mp[s[i]]++;

    }
     for (auto x: se)
    {
        if (mp[x]>=2)
            c+=2;
        else
            c++;

    }
    cout<<c/2<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
