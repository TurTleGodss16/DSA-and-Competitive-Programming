#include<bits/stdc++.h>
#define ll long long
using namespace std;

int t, hc, dc, hm, dm, k, w, a;
main(){
    ios_base::sync_with_stdio(0);
    //freopen
    //freopen
    cin >> t;
    while(t--)
    {
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;

        for(int i = 0; i <= k; i++)
        {
            int tmp = hc*(k-i)*w + dc*x*a + i*(k - i)*a*w;
            int check = hm*dm - hc*dc;
            if(tmp >= check)
            {
                cout << "YES";
                break;
            }
            cout << "NO";
        }
    }
}
