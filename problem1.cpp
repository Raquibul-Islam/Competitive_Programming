#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,two=0,x,rem,re=0;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
            if(x==1)
                one++;
            else
                two++;
        }

        if (one==n )
        {
            cout<<1<<endl;
            continue;
        }


        else
        {

            if(two%2==0)
            {
                rem = (two/2);
                for(int i=0; i<n; i++)
                {
                    if(v[i]==2)
                        re++;
                    if(re==rem)
                    {
                        cout<<i+1<<endl;
                        break;

                    }
                }
            }
            else
                cout<<-1<<endl;


        }

    }
}
