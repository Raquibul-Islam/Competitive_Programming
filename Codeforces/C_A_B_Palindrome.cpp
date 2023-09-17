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
    ll a,b, rem1=0, rem=0,n,cnt=0;
    string s,ss="";
    cin>>a>>b;
    cin>>s; 
    n = s.size();
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        rem++;
        if(s[i]=='1')
        rem1++;

        
    }
   
    ll zero = a-rem;
    ll one = b-rem1;
    if(one<0 || zero <0)
    {
        cout<<-1<<endl;
        return;
    }
     // cout<<one<<" "<<zero<<endl;
    
    for(int i=0; i<n/2; i++)
    {
        
          if(s[i]==s[n-i-1] and (s[i]!='?' || s[n-i-1]!='?' ))
          continue;
        if(s[i]!=s[n-i-1] and (s[i]=='?' || s[n-i-1]=='?' ))
        {
            
            if(s[i]=='1')
            {
                if(one>0)
                 {
                    s[n-1-i]= '1';
                    one = one-1;;
                 }
                 else
                 {
                    cnt++;
                    break;
                 }
            }

             if(s[i]=='0')
            {
                if(zero>0)
                 {
                    s[n-1-i]= '0';
                    --zero;
                 }
                  else
                 {
                    cnt++;
                    break;
                 }
            }

              if(s[i]=='?')
            { 
                if(s[n-i-1]=='0')
                {
                  
                     if(zero>0)
                    {
                        s[i] = '0';
                        --zero;
                    }
                     else
                 {
                    cnt++;
                    break;
                 }
                }

                if(s[n-i-1]=='1')
                {
                     
                     if(one>0)
                    {
                        s[i]= '1';
                        --one;
                    }
                     else
                 {
                    cnt++;
                    break;
                 }
                }
               
            }
            
        }
      
     }
    



    if(cnt==0){
      for(int i=0; i<n/2; i++){
         if(s[i]==s[n-i-1] and (s[i]!='?' || s[n-i-1]!='?' ))
          continue;

           if(s[i]!=s[n-i-1] )
           {
                    cnt++;
                    break;
           }
           else
           {
              if(one>1)
              {
                  s[i] = '1';
                  s[n-1-i]= '1';
                  one = one-2;
                
              }
              else
              {
                  if(zero>1)
              {
                  s[i] = '0';
                  s[n-1-i]= '0';
                  zero = zero-2;
                 }
                 else
                 {
                    cnt++;
                    break;
                 }
                 
              }
           }
      }
    }
            



    if(n%2==1 and s[(n/2)]=='?')
    {
        if(one>0 or zero>0)
        {
            if(one>0)
              s[(n/2)] = '1';
            else
                s[(n/2)] = '0';
        }
       
        else
        {
            cnt++;
        }
    }
    ss = s;
    
     //cout<<zero<<endl;
    reverse(s.begin(), s.end());
    if(cnt!=0)
    cout<<-1<<endl;
   else{
    if(ss ==s)
    cout<<s<<endl;
    else
    cout<<-1<<endl;
   }

    
 }
 
int main()
 {
      fast;    
      int t=1;
      cin>>t;
      while(t--)
      solve();
 }