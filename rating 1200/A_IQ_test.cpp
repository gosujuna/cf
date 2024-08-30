#include <bits/stdc++.h>

using namespace std;


#define int long long
using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

void solve(){
	// looknice;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 vector<int> a(n);
	 vector<int> b,c;
	 for (int i =0; i<n; i++){
		cin >> a[i];
		if (a[i] % 2 == 0){
			b.push_back(i);
		} else{
			c.push_back(i);
		}
	 }

	 if (sz(b) > sz(c)){
		cout << c[0]+1 << endl;
	 } else{
		cout << b[0]+1 << endl;
	 }
	 
}