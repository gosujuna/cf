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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)
long long pow10[10];

void solve(){
	// looknice;
	int A,B,C;
        long long k;
        cin >> A >> B >> C >> k;
        
        long long a_min = (A ==1) ? 1 : pow10[A-1];
        long long a_max = pow10[A] -1;
        long long b_min_global = (B ==1) ? 1 : pow10[B-1];
        long long b_max_global = pow10[B] -1;
        long long c_min = (C ==1) ? 1 : pow10[C-1];
        long long c_max = pow10[C] -1;
        bool found = false;
        for(long long a = a_min; a <=a_max; a++){
            long long b_min_candidate = c_min - a;
            long long b_min = max(b_min_candidate, b_min_global);
            long long b_max_candidate = c_max - a;
            long long b_max = min(b_max_candidate, b_max_global);
            if(b_min > b_max) continue;
            long long count_b = b_max - b_min +1;
            if(k > count_b){
                k -=count_b;
            }
            else{
                long long b = b_min + (k -1);
                long long c = a + b;
                cout << a << " + " << b << " = " << c << "\n";
                found = true;
                break;
            }
        }
        if(!found){
            cout << "-1\n";
        }

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 pow10[0] =1;
	for(int i=1;i<=9;i++){
		pow10[i]=pow10[i-1]*10;
	} 
	 while (T--){
		solve();
	 }
}