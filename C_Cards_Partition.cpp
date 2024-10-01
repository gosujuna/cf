#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
using ll = long long;
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	
	ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll m = 0;
        ll x = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            m += a[i];
            if(a[i] > x) x = a[i];
        }
        
        
        ll answer = 1;
        
        for(ll s = n; s >=1; s--){
            if(m < x * s){
                ll c = x * s - m;
                if(c <= k){
                    answer = s;
                    break;
                }
            }
            else{
                if(m % s ==0){
                    answer = s;
                    break;
                }
                else{
                    ll c = s - (m % s);
                    if(c <=k){
                        answer = s;
                        break;
                    }
                }
            }
        }
        cout << answer << "\n";



	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}