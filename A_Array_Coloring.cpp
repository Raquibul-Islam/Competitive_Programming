#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)



{
    int n,sum=0,x,tmp;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        
        cin>>x;
        if(i>0)
        sum+=x;
        else
         tmp = x;
    }
    if(sum%2 == tmp%2 or (sum%2!=0 and tmp%2!=0))
   
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
}