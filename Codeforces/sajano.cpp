#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n,x;
     cin>>n;
     vector<int>v;
     vector<int>v1;
     for(int i=0; i<n; i++)
     {
         cin>>x;
         v.push_back(x);
     }
     int j=n-1,m=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            v1.push_back(v[m]);
            m++;
        }
        else
        {
             v1.push_back(v[j]);
             j--;
        }

    }
    for(int k=0; k<n; k++)
    {
        cout<<v1[k]<<" ";
    }
    cout<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
