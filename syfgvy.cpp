#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    long double ans,sum=0,x;
    cin>>n;
    long long int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
        sort(arr,arr+n);
       cout<<fixed<<setprecision(9)<<arr[n-1] + ((sum-arr[n-1])/(n-1))<<endl;


}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
