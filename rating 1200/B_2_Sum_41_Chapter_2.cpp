#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


vector<int> findArray(int P) {
    vector<int> factors;

    
    for (int d = 2; d * d <= P; d++) {
        while (P % d == 0) {
            factors.push_back(d);
            P /= d;
        }
    }
    if (P > 1) {
        factors.push_back(P);
    }

    
    sort(factors.begin(), factors.end(), greater<int>());

    int currentSum = accumulate(factors.begin(), factors.end(), 0);
    bool merged;

    do {
        merged = false;

        for (size_t i = 0; i < factors.size() && !merged; i++) {
            for (size_t j = 0; j < factors.size() && !merged; j++) {
                if (i == j) continue;

                int newVal = factors[i] * factors[j];
                if (currentSum - factors[i] - factors[j] + newVal <= 41) {
                    currentSum += newVal - factors[i] - factors[j];
                    factors[i] = newVal;
                    factors.erase(factors.begin() + j);
                    merged = true;
                }
            }
        }

        
        sort(factors.begin(), factors.end(), greater<int>());
    } while (merged);

    
    while (currentSum < 41) {
        factors.push_back(1);
        currentSum++;
    }

    if (currentSum != 41 || factors.size() > 100) {
        return {};
    }

    return factors;
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