#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0,q,x,ii=0;

    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    cin>>q;
    for(int i=0; i<q; i++)
    {
         cin>>x;
    cout<<(std::upper_bound(arr, arr+n, x)-arr)<<endl;;




    }
}

