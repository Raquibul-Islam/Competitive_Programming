#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int k,x,c=0,sum=0,m=0;
   cin>>k;
   vector<int>v;
   for(int i=0; i<12; i++)
   {
       cin>>x;
       v.push_back(x);
   }
   std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

   while(sum<k && m<12){

            sum+=v[m];
             m++;


   }
   if(sum<k)
    cout<<"-1"<<endl;
   else
   cout<<m<<endl;

}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
