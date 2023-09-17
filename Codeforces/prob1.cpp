#include<bits/stdc++.h>
using namespace std;
 int mi(int cnt)
    {
        if (cnt==1)
            return 9;
        else if(cnt == 2)
            return 7;
        else if(cnt == 3)
            return 4;
        else if(cnt == 4)
            return 0;

    }
int solve()
{
    int n,cntt=0;
    cin>>n;
    int temp = n;
    while(temp!=0)
    {

        temp= temp/10;
        cntt++;
    }

    cout<<10*(n%10)-mi(cntt)<<endl;




}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
