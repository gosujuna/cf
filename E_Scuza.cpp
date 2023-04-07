#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		int n, q;
		cin >> n >> q;

		vector<long long> pref;
    pref.push_back(0);
    vector<int> prefmax;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pref.push_back(pref.back()+x);
        if(i == 0)
        {
            prefmax.push_back(x);
        }
        else
        {
            prefmax.push_back(max(prefmax.back(), x));
        }
    }
    for(int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int ind = upper_bound(prefmax.begin(), prefmax.end(), k)-prefmax.begin();
        cout << pref[ind] << " ";
    }
    cout << endl;
	 }
}