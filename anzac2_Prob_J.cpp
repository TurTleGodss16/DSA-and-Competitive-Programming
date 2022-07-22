#include<bits/stdc++.h>
#define el '\n'
#define pb push_back
#define ll long long
#define N 1000000009

using namespace std;
const ll modd = 1000000009;


//Check Prime number or not - sqrt(n)
bool isPrime(int n){
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return n > 1;
}

//Check Prime number with Eratosthenes - n*log(n)
void checkPrime(int n){
    bool isPrime[n + 5];
    for(int i = 0; i <= n; i++)
        isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; i++)
    {
        if(isPrime[i] == true)
        {
            for(int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

//Factorize Prime number - sqrt(n)
vector<int> factorize(int n){
    vector<int> ans;
    for(int i = 2; i*i <= n; i++)
    {
        while(n % i == 0)
        {
            ans.pb(i);
            n /= i;
        }
    }
    if(n != 1)
        ans.pb(n);

    return ans;
}

//Segment Tree
int IT[4*10000 + 5];
//Update Segment Tree
void update(int id, int l, int r, int i, int v){
    if(l > i || r < i)
    {
        return;
    }

    if(l == r)
    {
        IT[i] = v;
        return;
    }

    int mid = (l+r)/2;
    update(id * 2, l, mid, i, v);
    update(id * 2 + 1, mid+1, r, i, v);

}

//Get Max Segment Tree
int getMax(int id, int l, int r, int u, int v){
    if(l > v || u > r)
    {
        return -N;
    }


}

int s, n, ans = 0, seat[1005];
main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> s;
    for(int i = 1; i <= s; i++)
    {
        cin >> seat[i];
    }

    for(int i = 1; i < s; i++)
    {
        int curr = seat[i+1] - seat[i] - 1;
        if(curr%2 == 1)
        {
            ans += curr / 2;
        }
        else
        {
            ans += (curr-1) / 2;
        }
    }
   // cout << ans << el;

    int cur_pos = n - seat[s] + seat[1] - 1;
   // cout << cur_pos << el;

    if(cur_pos%2 == 1)
    {
        ans += cur_pos / 2;
    }
    else
    {
        ans += (cur_pos-1)/2;
    }
    cout << ans;
}

