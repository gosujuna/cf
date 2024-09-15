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
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int n,k;
	cin >> n >> k;
	int sum = (k + k+n -1) * n;
	sum /= 2;
	int diff = LLONG_MAX;
	
	long long l = 1;  
    long long r = n - 1;  
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        long long leftSum = (k + k + mid - 1) * mid / 2;
        long long rightSum = sum - leftSum;
		//cout << leftSum << " " << rightSum << endl;
        
        diff = min(diff, abs(rightSum - leftSum));
        
        if (leftSum < rightSum) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << diff << endl;
    
	
}
//3 4 5 6 7
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}