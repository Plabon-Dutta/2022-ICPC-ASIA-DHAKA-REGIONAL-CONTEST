#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int testcase, cnt = 1;
    long long int a[21];
    a[1] = 1;
    for (int i = 2; i < 21; i++) {
        a[i] = a[i - 1] * i;
    }
    cin >> testcase;
    while(testcase--) {
        cout << "Case " << cnt++ << ": ";
        int n;
        long long int k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }  
        cout << a[n] << '\n'; 
    }
    
    return 0;
}
