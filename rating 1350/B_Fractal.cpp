#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");
#else
    #define fin std::cin
    #define fout std::cout
#endif
 
int main() {
    
    int n, k;
    fin >> n >> k;
    
    int N = 1;
    for (int i = 0; i < k; i++) {
        N *= n;
    }
    
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        fin >> s[i];
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int x = i, y = j;
            bool black = false;
            for (int l = 0; l < k; l++) {
                black |= (s[x % n][y % n] == '*');
                x /= n, y /= n;
            }
            fout << ".*"[black];
        }
        fout << "\n";
    }
    
    return 0;
}