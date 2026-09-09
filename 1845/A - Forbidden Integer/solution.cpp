#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        // Case 1: 1 is available.
        // We can simply use 1 repeatedly.
        if (x != 1) {
            cout << "YES
";
            cout << n << '
';
 
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << '
';
        }
 
        // Case 2: 1 is unavailable.
        else {
            // If k == 1, there is nothing available.
            if (k == 1) {
                cout << "NO
";
                continue;
            }
 
            // If k == 2, only 2 is available.
            // Therefore n must be even.
            if (k == 2) {
                if (n % 2 != 0) {
                    cout << "NO
";
                }
                else {
                    cout << "YES
";
                    cout << n / 2 << '
';
 
                    for (int i = 0; i < n / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << '
';
                }
            }
 
            // k >= 3, so 2 and 3 are available.
            else {
                cout << "YES
";
 
                vector<int> ans;
 
                // Use 2s and 3s.
                if (n % 2 == 0) {
                    for (int i = 0; i < n / 2; i++) {
                        ans.push_back(2);
                    }
                }
                else {
                    // n is odd, so use one 3 first.
                    ans.push_back(3);
 
                    for (int i = 0; i < (n - 3) / 2; i++) {
                        ans.push_back(2);
                    }
                }
 
                cout << ans.size() << '
';
 
                for (int val : ans) {
                    cout << val << " ";
                }
                cout << '
';
            }
        }
    }
 
    return 0;
}