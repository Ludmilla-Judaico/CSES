#include <bits/stdc++.h>
using namespace std;

long long desarranjo(long long n) {
    long long MOD = 1e9 + 7;
    if (n == 0) return 1;
    if (n == 1) return 0;
    
    vector<long long> d(n + 1);
    d[0] = 1;
    d[1] = 0;
    
    for (long long i = 2; i <= n; ++i) {
        d[i] = ((i - 1) * (d[i - 1] + d[i - 2]))%MOD;
    }
    
    return d[n];
}

int main() {
    
    long long n; cin>>n;
    long long des = desarranjo(n);
    cout << des << '\n';

    return 0;
}
