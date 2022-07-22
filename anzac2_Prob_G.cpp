#include<bits/stdc++.h>
#define el '\n'
#define pb push_back
#define ll long long
#define N 1000000009

using namespace std;
const ll modd = 1000000009;


//Check Prime number or not - sqrt(n)
bool isPrime(ll n){
    for(ll i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return n > 1;
}

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
bool checksqrt(ll x)
{

    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }

    return false;
}
ll a, b;
main(){
    ios_base::sync_with_stdio(false);
    cin >> a >> b;
   /* bool isPrime[10005];
    for(ll i = 0; i <= 10005; i++)
        isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false;
    for(ll i = 2; i * i <= 10005; i++)
    {
        if(isPrime[i] == true)
        {
            for(ll j = i * i; j <= 10005; j += i)
            {
                isPrime[j] = false;
            }
        }
    }*/
    if(isPrime(a) && isPrime(b))
    {
        if(a != b) cout << "full credit";
        else cout << "no credit";
    }
    else
    {
        ll kt = 1;
        for(ll i = 2; i <= 1000000; i++)
        {
            if(a%(i*i) == 0 || b%(i*i) == 0)
            {
                kt++;
            }
        }
        if(kt != 1) cout << "no credit";
        else
        {
            if(gcd(a, b) != 1) cout << "no credit";
            else cout << "partial credit";
        }
    }

}


