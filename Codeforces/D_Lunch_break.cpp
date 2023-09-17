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
    string s1,s2,sh1="",sm1="",sh2="",sm2="";
    int j=3,hnour,minute;
    cin>>s1>>s2;
    for(int i=0; i<2; i++)
    {
         sh1 += s1[i];
         sm1 += s1[j];
         sh2 += s2[i];
         sm2 += s2[j];
         j++;
    }
   
     int ish1 = std::stoi(sh1);
    
     int ish2 = std::stoi(sh2);
     
     int ism1 = std::stoi(sm1);
    
     int ism2 = std::stoi(sm2);
     if(ism1+ism2>=60)
     {
        hnour = ish1+ish2+1;
        minute = (ism1+ism2)-60;
     }
     
     else
     {
         hnour = ish1+ish2+1;
         minute = (ism1+ism2);
     }
     if(hnour%2==0)
     {
        cout<<hnour/2<<":"<<minute<<endl;
     }
     else
     {
       cout<<(hnour/2)+(30+minute)%60<<":"<<
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