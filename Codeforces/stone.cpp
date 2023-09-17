#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,mx=0,mn=200,ans=0,x,tmp1,tmp2;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
        v1.push_back(x);
        if(mx<v[i])

            mx = v[i];


        if(mn>v[i])

            mn = v[i];

    }
    //cout<<v[0]<<endl;

    reverse(v1.begin(),v1.end());
     //cout<<v1[0]<<endl;
    for(int i=0; i<n; i++)
    {
        if(mx==v[i])
            tmp1 = i+1;
    }
  //cout<<tmp1<<endl;
    for(int i=0; i<n; i++)
    {
        if(mn==v1[i])
            tmp2 = i+1;
    }
    //cout<<tmp1+tmp2<<endl;
     v2.push_back(tmp1+tmp2);


    for(int i=0; i<n; i++)
    {
        if(mn==v[i])
            tmp1 = i+1;
    }

    for(int i=0; i<n; i++)
    {
        if(mx==v1[i])
            tmp2 = i+1;
    }
    //cout<<tmp1+tmp2<<endl;
    v2.push_back(tmp1+tmp2);

   tmp1=0;
   tmp2=0;

    for(int i=0; i<n; i++)
    {
        if(mx==v[i] || mn==v[i])
            {
                if(mx==v[i])
                {
                    if(tmp2==0)
                        tmp1=i+1;
                    else
                    tmp1=abs(tmp2-(i+1));
                }

                else
                {
                    if(tmp1==0)
                        tmp2=i+1;
                    else
                    tmp2=abs(tmp1-(i+1));
                }

            }
    }
    // cout<<tmp1+tmp2<<endl;
      v2.push_back(tmp1+tmp2);

   tmp1=0;
   tmp2=0;
    for(int i=0; i<n; i++)
    {
         if(mx==v1[i] || mn==v1[i])
         {


           if(mx==v1[i])
                {
                    if(tmp2==0)
                        tmp1=i+1;
                    else
                    tmp1=abs(tmp2-(i+1));
                }

                else
                {
                    if(tmp1==0)
                        tmp2=i+1;
                    else
                    tmp2=abs(tmp1-(i+1));
                }
         }
    }
   //cout<<tmp1+tmp2<<endl;
      v2.push_back(tmp1+tmp2);

     sort(v2.begin(),v2.end());

    cout<<v2[0]<<endl;




}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
