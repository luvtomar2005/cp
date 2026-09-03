// #include <bits/stdc++.h>
// using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        string x , s;
        cin >> x >> s;
        int ans = -1;
        for(int operations = 0;operations <= 5;operations++){
            if(x.find(s) != string::npos){
                ans = operations;
                break;
            }
            x  += x;
        }
        cout << ans << '
';
    }
    return 0;
}