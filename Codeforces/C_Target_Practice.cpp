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

       int sum=0;
       string s;
       char arr[101][101];
        for(int i=0; i<10; i++)
      {  
          cin>>s;
        for(int j=0; j<10; j++)
        {
            arr[i][j] = s[j]; 
            
        }
    }
    for(int i=0; i<10; i++)
      {  
          
        for(int j=0; j<10; j++)
        {
            if(arr[i][j]=='X')
            {

               // cout<<i<<" "<<j<<endl;
                 if(i==0 || i==9 || j==0 || j==9)
                 {
                     sum+=1;
                 }
                
                 else if(i==1 || i==8 || j==1 || j==8 )
                 {
                    sum+=2;
                 }
               
                 else if(i==2 || i==7 || j==2 || j==7 )
                 {
                    sum+=3;
                 }
                
                else if(i==3 || i==6 || j==3 || j==6 )
                 {
                     sum+=4;

                 }
                
               
          
                else if(i==4 || i==5 || j==4 || j==5)
                 {
                    sum+=5;
                 }
                  
                  
            }

            //cout<<"sum= "<< sum<<endl;
            
        }

    

}

   
    cout<<sum<<endl;

    
 }
 
int main()
 {
      fast;    
      int t=1;
      cin>>t;
      while(t--)
      solve();
 }