#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int testcase;
    cin >> testcase;
    while(testcase--) {
        double k;
        cin >> k;
        double w = sqrt(((k * k) - 1) / 3);
        double h = sqrt(1 - (w * w));
        double ratio = w / h;
        cout << fixed << setprecision(4);
        cout << ratio << '\n';
    }
    
    return 0;
}
