#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    int r = k - 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int pati = 0, dose = 1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (pati == 0 || dose <= v[i])
        {
            cnt++;
            pati = r;
            dose = v[i] + w + d + 1;
        }
        else
            pati--;
    }
    cout << cnt << '\n';



}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve ();




}
