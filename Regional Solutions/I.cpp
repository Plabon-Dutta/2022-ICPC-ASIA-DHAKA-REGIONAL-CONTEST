#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int testcase, cnt = 1;
    cin >> testcase;
    while(testcase--) {
        cout << "Case " << cnt++ << ": ";
        int n;
        long long int k;
        cin >> k >> n;
        long long int x = pow(2, n + 2);
        if (k > x) cout << -1 << '\n';
        else {
            int c = 0;
            while (k > 4) {
                x /= 2;
                if (k > x) {
                    c++;
                    k -= x;
                }
                
            }
            long long int ans = 1;
            if (k == 4) {
                ans = 4;
            }
            else if (k == 2 || k == 3) ans = 2;
            while (c--) ans *= 2;
            cout << ans << '\n';
        }

    }
    
    return 0;
}
