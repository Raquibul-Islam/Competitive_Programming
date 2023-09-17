#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,c=0,x,temp;
    char ch;
    cin>>n>>temp;
    vector<long long int>v;
    vector<char>vc;
    for (int i=0; i<n; i++)
    {
       cin>>ch>>x;
       vc.push_back(ch);
       v.push_back(x);


    }
    for (int i=0; i<n;i++)
    {

        if(vc[i]=='+')
        temp += v[i];
        else
        {
            if(temp-v[i]<0)
            {
                c++; continue;
            }

            else
            temp =temp -  v[i];
        }


    // cout<<temp<<endl;

    }



        cout<<temp<<" "<<c<<endl;

}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve ();




}
