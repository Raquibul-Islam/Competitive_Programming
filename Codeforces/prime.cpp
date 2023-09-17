#include<bits/stdc++.h>
using namespace std;
solve()
{
    long long int n,p,temp;
    const int N = 1e6+10;
    vector<long long int>v(N,1);
    v[1]=0;
    cin>>n;
            for(int i=2; i<=N; i++)
            {
                if(v[i]==1)
                {
                   for(int k = i+i; k<=N; k+=i)
                    v[k]=0;
                }
            }

    while(n--)
    {
          cin>>p;
          temp = sqrt(p);
          if(temp*temp == p && v[temp])
              cout<<"YES"<<endl;
                 else
                 cout<<"NO"<<endl;


    }

}
int main()
{
    int t=1;
   // cin>>t;
    while(t--)
       solve();

}
