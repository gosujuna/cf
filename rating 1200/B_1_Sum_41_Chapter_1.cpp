#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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

vector<int> findArray(int P) {
    vector<int> result;
    int currentSum = 0;

   
    for (int d = 2; d * d <= P && currentSum <= 41; d++) {
        while (P % d == 0) {
            result.push_back(d);
            P /= d;
            currentSum += d;
        }
    }
    
    if (P > 1) {
        result.push_back(P);
        currentSum += P;
    }

    sort(result.begin(), result.end());

    // Combine smallest numbers while sum is not greater than 41
    while (result.size() > 1) {
        int newVal = result[0] * result[1];
        if (currentSum - result[0] - result[1] + newVal > 41) {
            break;  // multiplying will exceed sum of 41
        }
        currentSum += newVal - result[0] - result[1];
        result.erase(result.begin());
        result.erase(result.begin());
        result.push_back(newVal);
        sort(result.begin(), result.end());
    }

    // Fill in with 1s until the sum becomes 41
    while (currentSum < 41) {
        result.push_back(1);
        currentSum++;
    }

    if (currentSum != 41 || result.size() > 100) {
        return {};
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int P;
        cin >> P;

        vector<int> result = findArray(P);

        cout << "Case #" << i << ": ";
        if (result.empty()) {
            cout << "-1" << endl;
        } else {
            cout << result.size() << " ";
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}