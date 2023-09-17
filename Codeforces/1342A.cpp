#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int num,temp=2;
    vector<long long int>v;
    cin>>num;
   for (int i=2; i<35; i++)
    {
        temp*=2;
       v.push_back(temp-1);
    }
     for (int i=0; i<v.size(); i++)
    {
        if(num%v[i]==0)
        {
           cout<<num/v[i]<<endl;
           break;
        }
    }





}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
