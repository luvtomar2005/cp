#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int neg = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x == -1) {
                neg++;
            }
        }
 
        int pos = n - neg;
        int ans = 0;
 
        // Step 1: Make sum >= 0
        while (neg > pos) {
            neg--;
            pos++;
            ans++;
        }
 
        // Step 2: Make product = 1
        if (neg % 2 == 1) {
            neg--;
            pos++;
            ans++;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}