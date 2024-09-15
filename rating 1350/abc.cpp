#include <bits/stdc++.h>

using namespace std;
#ifdef LOCAL
#include "zdebug.h"
#else
#define debug(...) 42
#endif

int main() {

    debug("This is a debug message");
    
    #ifdef LOCAL
        std::cerr << "LOCAL is defined" << std::endl;
    #else
        std::cerr << "LOCAL is not defined" << std::endl;
    #endif

    return 0;
}