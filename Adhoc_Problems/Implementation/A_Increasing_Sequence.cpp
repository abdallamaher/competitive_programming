#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, k; scanf("%d%d", &n, &k);
    vector<int> v(n);
    for (auto& it : v)scanf("%d", &it);
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[i - 1]) {
            int t = (v[i - 1] - v[i] + k) / k;
            v[i] += t * k;
            ans += t;
        }
    }
    printf("%lld", ans);
    return 0;
}