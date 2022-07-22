#include<bits/stdc++.h>
#define el '\n'
using namespace std;
int n, s, ans, check;
main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> s;
    while(n--)
    {
        string s1;
        int type = 0;
        cin >> s1;
        int m = s1.length();

        if(m == 1)
        {
            char c = s1[0];
            type = c - '0';
        }
        else if (m == 2)
        {
            char c = s1[0];
            type = (c - '0') + 1;
        }
        //check += type;
        if(check + type > s)
        {
            check = 0;
            ans += 1;
            //check += type;
        }
        check += type;
        //cout << ans << el;
    }
    cout << ans;
}
