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
  
void solve()
{
    string s; 
    cin >> s;

    ll cnt=0;

    if(s == "()")
    {
        cout<<"NO"<<endl;
        return;
    }
  //cout<<"cnt = "<<cnt<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if(i+1<s.length())
        {
             if(s[i]==s[i+1])
             cnt++;
        }
    }

        int length = s.length()*2;
        cout << "YES\n";
       if(cnt!=0){
           for (int i = 1; i <= length; i++)
            {
                if(i%2!=0) cout << "(";
                else cout << ")";
            }
       }
       else{
            for (int i = 1; i <= length; i++)
            {
                if(i<=length/2) cout << "(";
                else cout << ")";
            }
       }
        cout << "\n";
    }
    
       
  
 
 
int main()
{
     fast;    
     int t=1;
     cin>>t;
     while(t--)
     solve();
}