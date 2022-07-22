#include<bits/stdc++.h>
#define int long long
#define el '\n'
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
        int kt = 0;
        for(int i = 0; i <= k; i++)
        {
            int tmp = (hc+i*a-1)/dm;
            int check = (hm-1)/(dc+(k-i)*w);
            //cout << tmp << " " << check << el;
            if(tmp >= check)
            {
                kt++;
            }
        }
        if(kt != 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << el;
    }
}
