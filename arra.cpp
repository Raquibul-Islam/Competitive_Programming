#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,mx=0,mn=200,ans=0;
    vector<int>v1;
    vector<int>v2;
    cin>>n;
    int arra[n];
    for(int i=0; i<n; i++)
    {
        cin>>arra[i];
        if(mx<arra[i])

            mx = arra[i];


        if(mn>arra[i])

            mn = arra[i];

    }
        //cout<<mx<<" "<<mn<<endl;

   for(int j=0; j<n/2+(n%2); j++)
   {
        v1.push_back(arra[j]);
        //cout<<v1[j];
   }
    //cout<<endl;
int ii=0;
    for(int j=n-1;j>=n/2+(n%2);  j--)
    {
         v2.push_back(arra[j]);

    }

  // cout<<endl;

        for(int i=0; i<v1.size(); i++)
        {
            if(mx==v1[i] || mn ==v1[i])
            {
                ans+=(i+1);
                //cout<<ans<<endl;
                v1.erase(v1.begin()+i);
                i--;
            }


        }
         for(int i=0; i<v2.size(); i++)
        {
            if(mx==v2[i] || mn ==v2[i])
            {
                ans+=(i+1);
                v2.erase(v2.begin()+i);
                i--;
            }


        }

  cout<<ans<<endl;




}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
