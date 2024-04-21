//بسم الله الرحمن الرحيم
//Author : Rakibul Islam 
#include<bits/stdc++.h>
using namespace std;
 
#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define     inn             cin>>n
#define     ins             cin>>s
#define     nl              endl
#define     ll              long long int
#define     Pair            pair<ll,ll>
#define     F               first
#define     S               second
#define     all(v)          v.begin(),v.end()
#define     Max             99999999999999999999
#define     Min             -1000000000000000014
#define     mod             1000000007
#define     range           100007
#define     pb              push_back
#define     Vector          vector<ll>
#define     PI              3.1415926535897
 
 //--------------------RAW CODE--------------------
void depth_first_search(int st, int len, int ls, vector<int>& pb, vector<vector<int>>& gp, int& ans) {
   
    ans = max(ans, len);
    int temp;
    for (int temp : gp[st]) {
        if (pb[temp] > ls) {
           depth_first_search(temp, len + 1, pb[temp], pb, gp, ans);
        }
    }
}
void solve()
{

    int n,ss;
    cin>>n>>ss;
    vector<int> pb(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> pb[i];
    }

    vector<vector<int>> gp(n + 1);
    for (int i = 1; i < n; ++i) {
        int x,y;
        cin>>x>>y;
        gp[x].push_back(y);
        gp[y].push_back(x);
    }

    int ans = 0;
    depth_first_search(ss, 1, pb[ss], pb, gp, ans);
    cout << ans << endl;


    
}

int main()
{
     fast;    
     int t=1;
    // cin>>t;
     while(t--)
     solve();
}