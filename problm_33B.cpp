#include<bits/stdc++.h>
using namespace std;
solve ()
{

    long long int temp=0,a,b,n,num;
    cin >> num >> n;
    cin >> a;
    temp+=a;
    for (int i=2;i<=n;i++)
    {
        cin >> b;
        if (b<a)
            temp+=(num-a)+b;
        else
            temp+=b-a;
        a=b;
    }
    printf("%I64d\n",temp-1);

    return 0;




}
int main()
{
    int t=1;
    cin>>t;

    while(t--)
    {
        solve();
    }

}

