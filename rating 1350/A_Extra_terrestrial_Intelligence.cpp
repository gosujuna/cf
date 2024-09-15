#include <bits/stdc++.h>

using namespace std;

#ifdef ONLINE_JUDGE
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");
#else
    #define fin std::cin
    #define fout std::cout
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int n;
	fin >> n;
	string s;
	fin >> s;
	int start = -1;
	int diff =0;
	int prevdiff = -1;
	bool ok = true;
	for (int i =0; i<n; i++){
		if (start == -1 && s[i] == '1'){
			start = i;
		} 
		else if (s[i] == '1'){
			diff = i - start;
			start = i;
			if (prevdiff != diff && prevdiff != -1){
				ok = false;
				break;
			}
			prevdiff = diff;
		}
		
		
	}
	


	fout << (ok ? "YES" : "NO") << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}