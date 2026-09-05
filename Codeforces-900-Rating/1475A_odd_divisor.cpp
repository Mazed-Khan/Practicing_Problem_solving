#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        while (n % 2 == 0) n /= 2;
        puts(n > 1 ? "YES" : "NO");
    }
    return 0;
}