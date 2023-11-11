#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin >> n >> m;
    ll sum=m;
    vector < ll > v;
    for(int i=0;i<n;i++)
    {
        ll a;
        scanf("%lld",&a);
        sum+=a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    if(sum%n==0)sum=sum/n;
    else sum=sum/n +1;
    if(v[0]>=sum)sum=v[0];
    cout << sum << " " << v[0]+m << endl;
}