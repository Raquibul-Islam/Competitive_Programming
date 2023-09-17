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
    int x1,p1,x2,p2,tm1,tm2,cnt=0;
    cin>>x1>>p1>>x2>>p2;
     int arr1[10];
     int arr2[10];
       for (int i = 0; i < 10; i++) {
          arr1[i] = 48;
          arr2[i] = 48;
        }

     //cout<<arr1[8]<<endl;

    
       string s1 = to_string(x1);
       string s2 = to_string(x2);
        tm1 = s1.size()+p1;
        tm2 = s2.size()+p2;

        for(int i=0; i<s1.size(); i++)
          arr1[i]= s1[i];

        for(int i=0; i<s2.size(); i++)
         arr2[i]= s2[i];

         //cout<<arr1[2]<<endl;
         
   
    if(tm1==tm2)
    {  
        for(int i=0; i<10; i++)
        {
            if(arr1[i]<arr2[i])
            {
               //cout<<arr1[i]<<" "<<arr2[i]<<endl;
                cout<<"<"<<endl;
                 cnt++;
                 break;
               
            }
            if(arr1[i]>arr2[i])
            {
                cout<<">"<<endl;
                cnt++;
                break;
                
            }
        }
        if(cnt==0)
        cout<<"="<<endl;

         
          
    }
   
    if(tm1<tm2)
    {
         cout<<"<"<<endl;
          return;
    }


     if(tm1>tm2)
    {
         cout<<">"<<endl;
           return;
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