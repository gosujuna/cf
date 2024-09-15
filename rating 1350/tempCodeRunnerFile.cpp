void solve() {
    int cur;
    std::cin >> cur;
    
    int k = 1, ans = 0;
    bool last = false;
    while (cur > 0) {
        ans += last ? k / 2 : k;
        int r = query(last ? k / 2 : k);
        if (r < cur) {
            last = false;
            cur = r;
        } else {
            last = true;
        }
        k *= 2;
		debug(ans);
    }
    
    std::cout << "! " << ans << std::endl;
}