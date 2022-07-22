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

int n, w, valid_green = 0, valid_yellow = 0;
map<char, int> mp_green;
map<char, int> mp_yellow;
map<char, int> mp_gray;
set<char> st_green, st_yellow, st_gray;
vector<char> vtc;
vector<string> vts_first;
vector<string> vts_second;
string guess[100005], hidden[100005], feedback[100005];
main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> w;
    for(int i = 0; i < n; i++)
    {
        cin >> guess[i] >> feedback[i];
    }
    for(int i = 0; i < w; i++)
    {
        cin >> hidden[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(feedback[i][j] == 'G')
            {
                mp_green[guess[i][j]] = j+1;
                st_green.insert(guess[i][j]);
            }
            else if(feedback[i][j] == 'Y')
            {
                //vtc.pb(feedback[i][j]);
                mp_yellow[guess[i][j]] = 10009;
                //valid_yellow++;
                st_yellow.insert(guess[i][j]);
            }
            else
            {
                mp_gray[guess[i][j]] = -10009;
            }
        }
    }
    valid_yellow = st_yellow.size();
    valid_green = st_green.size();
    //cout << mp['E'] << " " << mp['L'] << " " << valid_green << el;
    for(int i = 0; i < w; i++)
    {
        int cur_green_valid = 0;
        for(int j = 0; j < 5; j++)
        {
            if(mp_green[hidden[i][j]] == j+1)
            {
                //cout << hidden[i][j] << " ";
                cur_green_valid++;
            }
        }
        //cout << el;
        if(cur_green_valid == valid_green)
        {
            vts_first.pb(hidden[i]);
            //cout << "YES" << " " << cur_green_valid << el;
        }
    }
    //cout << mp_yellow['E'] << el;
    for(int i = 0; i < vts_first.size(); i++)
    {
        //cout << vts_first[i] << el;
        map<char, int> cnt;
        int cur_yellow_valid = 0;
        for(int j = 0; j < 5; j++)
        {
            if(mp_yellow[vts_first[i][j]] == 10009 && cnt[vts_first[i][j]] == 0)
            {
                cur_yellow_valid++;
                cnt[vts_first[i][j]]++;
                //cout << vts_first[i][j] << " ";
            }
        }
        if(cur_yellow_valid == valid_yellow)
        {
            vts_second.pb(vts_first[i]);
        }
        //cout << cur_yellow_valid << el;
    }

    for(int i = 0; i < vts_second.size(); i++)
    {
        for(int j = 0 ; j < 5; j++)
        {
            if(mp_gray[vts_second[i][j]] == -10009)
            {
                vts_second.erase(vts_second.begin()+i);
            }
        }
    }

    for(int i = 0; i < vts_second.size(); i++)
    {
        cout << vts_second[i] << el;
    }
    //cout << ans;
}

