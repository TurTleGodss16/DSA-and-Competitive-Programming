#include<bits/stdc++.h>
using namespace std;

vector<int> vt;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 1; i < 10; i++)
    {
        vt.push_back(i);
    }
    vt.resize(5);
    vt.resize(8, 100);

    for(auto i:vt)
    {
        cout << vt[i] << " ";
    }
}
