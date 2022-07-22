#include<bits/stdc++.h>
using namespace std;
int n, target, temp, ans;
int nums[104 + 5];
map<int, int> mp;
main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> target;
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
        mp[nums[i]] = i;
    }
    for(int i = 0; i < n; i++)
    {
        if(mp[target - nums[i]] > i)
        {
            cout << i << " " << mp[target - nums[i]];
            break;
        }
    }
}
