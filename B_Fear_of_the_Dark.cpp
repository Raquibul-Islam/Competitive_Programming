//بسم الله الرحمن الرحيم
//Author : Rakibul Islam 
#include<bits/stdc++.h>
using namespace std;
 
#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define     inn             cin>>n
#define     ins             cin>>s
#define     nl              endl
#define     ll              long long int
#define     Pair            pair<ll,ll>
#define     F               first
#define     S               second
#define     all(v)          v.begin(),v.end()
#define     Max             99999999999999999999
#define     Min             -1000000000000000014
#define     mod             1000000007
#define     range           100007
#define     pb              push_back
#define     Vector          vector<ll>
#define     PI              3.1415926535897
 
 //--------------------RAW CODE--------------------
  double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
   
bool canIlluminate(double w, int px, int py, int ax, int ay, int bx, int by) {
    double ap = distance(px, py, ax, ay);
    double bp = distance(px, py, bx, by);
    double ab = distance(ax, ay, bx, by);
    return ap <= w && bp <= w || ab <= 2 * w;
}
void solve()
{
    int t;
    cin >> t;

    while (t--) {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double pos = distance(0.0, 0.0, px, py);
        double za = distance(0.0, 0.0, ax, ay);
        double za = distance(0.0, 0.0, bx, by);
        double left = 0;
        double right = pos;
        while (right - left >= 1e-7) {
            double mid = (left + right) / 2.0;
            if (canIlluminate(mid, px, py, ax, ay, bx, by)) {
                right = mid;
            } else {
                left = mid;
            }
        }

        cout << fixed << setprecision(10) << right << endl;
    }

}

int main()
{
     fast;    
     int t=1;
    // cin>>t;
     while(t--)
     solve();
}