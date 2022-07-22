#include<bits/stdc++.h>
#define el '\n'
#define pb push_back
#define ll long long
#define N 1000000009
#define fi first
#define se second

using namespace std;
//const ll modd = 1000000009;


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

int n, a[300005], b[300005];
vector<vector<int, int>, int> vt[300005];
main(){
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        vt[i].fi.fi = i;
        vt[i].fi.se = b[i];
        vt[i].se = b[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == vt[i].fi.se)
        {
            vt[i].fi.fi = ;
            vt[i].fi.se = a[i];
        }
    }
}
