#include <bits/stdc++.h>

using namespace std;


const int N = 1e6 + 100, OO = 1e9;

int dp[N], a[N];
int n;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    for (int i = 0; i < N; i++)
        dp[i] = OO;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dp[0] = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int ind = lower_bound(dp, dp + N, a[i]) - dp;
        ans = max(ans, ind);
        //cout << a[i] << " " << ind << endl;
        dp[ind] = min(dp[ind], a[i]);
    }
    return cout << ans, 0;
}
