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
#define     cn                "one"
 
 //--------------------RAW CODE--------------------

 string trans(int* arr, string* a, int i)
 {
  if(arr[i]>=20 and arr[i]<=29)
        {
            if(arr[i]==20)
            return a[20];
            else
            {
                return (a[20]+" "+a[arr[i]%10]);
            }
        }


     if(arr[i]>=30 and arr[i]<=39)
        {
            if(arr[i]==30)
           return a[30];
            else
            {
                return a[30]+" "+a[arr[i]%10];
            }
        }

         if(arr[i]>=40 and arr[i]<=49)
        {
            if(arr[i]==40)
            return a[40];
            else
            {
               return a[40]+" "+a[arr[i]%10];
            }
        }

         if(arr[i]>=50 and arr[i]<=59)
        {
            if(arr[i]==50)
            return a[50];
            else
            {
               return a[50]+" "+a[arr[i]%10];
            }
        }

         if(arr[i]>=60 and arr[i]<=69)
        {
            if(arr[i]==60)
            return a[60];
            else
            {
                return a[60]+" "+a[arr[i]%10];
            }
        }

         if(arr[i]>=70 and arr[i]<=79)
        {
            if(arr[i]==70)
            return a[70];
            else
            {
                return a[70]+" "+a[arr[i]%10];
            }
        }

         if(arr[i]>=80 and arr[i]<=89)
        {
            if(arr[i]==80)
            return a[80];
            else
            {
               return a[80]+" "+a[arr[i]%10];
            }
        }

         if(arr[i]>=90 and arr[i]<=99)
        {
            if(arr[i]==90)
           return a[90];
            else
            {
                return a[90]+" "+a[arr[i]%10];
            }
        }
 }




int main()
 {
    double number;
    ll powoften = 100, tmp,i=0;
   
    cin>>number;
    ll num = int(number);
    double part = (number-num)*100;
    //cout<<part<<endl; 
   
      int frac = int(part);
      
   
    //cout<<frac<<endl;
    
    int arr[10] = {0};

    string a[100] = {"zero", "one", "two", "Three", "four", "five", "six", "seven", "eight", "nine",
                    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                    "eighteen", "nineteen"};a[20]= "twenty"; a[30] ="thirty"; a[40] ="fourty"; a[50] ="fifty";
                     a[60] ="sixty"; a[70] ="seventy"; a[80] ="eigthty"; a[90] ="ninety"; 
    
   while(num!=0)
   {
      i++;
      tmp = num%powoften;
      arr[i] = tmp;
      num = num/powoften;
      if (i==1)
      powoften = powoften/10;
      if(i==2)
         powoften = powoften*10;
      if(i==4)
         powoften = 10000000;
     
       }
       arr[6]= frac;


   if(arr[5]!=0)
   {

    if(arr[5]<=19)
      cout<<a[arr[5]]<<" core ";
      else
      {
        cout<<trans(arr, a, 5)<<" core ";

      }
   }
   
  
    if(arr[4]!=0)
   {

    if(arr[4]<=19)
      cout<<a[arr[4]]<<" lakh ";
      else
      {
        cout<<trans(arr, a, 4)<<" lakh ";

      }
   }
   if(arr[3]!=0)
   {

    if(arr[3]<=19)
      cout<<a[arr[3]]<<" thousand ";
      else
      {
        cout<<trans(arr, a, 3)<<" thousand ";

      }
   }

if(arr[2]!=0)
   {
       cout<<a[arr[2]]<<" "<<"hundred ";
    
   }


    if(arr[1]!=0)
   {

    if(arr[1]<=19)
      cout<<a[arr[1]];
      else
      {
        cout<<trans(arr, a, 1);

      }
   }
   

         if(frac!=0)
   {

      if(frac<=19)
      cout<<" decimal "<<a[arr[6]];
      else
      {
        cout<<" decimal "<< trans(arr, a, 6);

      }
   }


 
 }
 
