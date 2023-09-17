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
    string s,ss="";
    set<int>st;
    set<string>sf;
    cin>>s;
    for (int i=0; i<s.size(); i++)
    st.insert(s[i]);
    int arr[10] = {1, 1,2,6,24,120,720,5040,40320};
    int res = (arr[s.size()]/(arr[s.size()-st.size()+1]));
    
           
          for(int i=0; i<s.size(); i++)
            {
                ss = s;
                for(int l=0; l<s.size(); l++)
                {
                   swap(ss[i], ss[l]);
                    sf.insert(ss);

                    for(int l=0; l<s.size(); l++)
                {
                   swap(ss[i], ss[l]);
                    sf.insert(ss);

                    for(int l=0; l<s.size(); l++)
                {
                   swap(ss[i], ss[l]);
                    sf.insert(ss);

                    for(int l=0; l<s.size(); l++)
                {
                   swap(ss[i], ss[l]);
                    sf.insert(ss);


                for(int k=0; k<s.size(); k++)
               {
                    swap(ss[i], ss[k]);
                    sf.insert(ss);
               } 
                for(int k=0; k<s.size(); k++)
               {
                    swap(ss[i], ss[k]);
                    sf.insert(ss);
               } 
            
         }
             }
              }
                }

   }
       cout<<sf.size()<<endl;
    for(auto x: sf)
    cout<<x<<endl;


    
    
 }
 
int main()
 {
      fast;    
      int t=1;
     // cin>>t;
      while(t--)
      solve();
 }