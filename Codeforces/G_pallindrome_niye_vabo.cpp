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
     set<int>st;
    int cnt=0,n,k=1,m,ii=0;
    char ch ;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s<<endl;
        return;
    }
    n = s.size();
    m=n-1;
     char ans[n+1];
    map<int, int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
        st.insert(s[i]);
    }
    for(auto x: st)
    {
        if(mp[x]%2==1)
        {
            cnt++;
             ch = x;
        }
           
    }
    if(cnt>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        sort(s.begin(), s.end());
        
       if(n%2)
        ans[s.size()/2]=ch;
        for(int i=1; i<n; )
        {
            if(s[i]==s[i-1])
            {
                ans[ii]=s[i];
                ans[m] = s[i];
               
                //cout<<ii<<" "<<m<<endl;
                i=i+2;
                ii++;
                m--;
               
            }
            else
            {
                //cout<<s[i-1]<<endl;
                
                i++;
               // cout<<ans[n/2]<<endl;
               

            }
            
        
        }

        for(int j=0; j<n; j++)
        cout<<ans[j];
    }
    
    
 }
 
int main()
 {
      fast;    
      int t=1;
      //cin>>t;
      while(t--)
      solve();
 }