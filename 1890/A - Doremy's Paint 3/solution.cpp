#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int,int> freq;
        for(int i =0;i<n;i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        if(freq.size() == 1){
            cout << "YES
";
        }        
        else if(freq.size() == 2 && (freq.begin() -> second == n / 2 || next(freq.begin()) -> second == n / 2)){
            cout << "YES
";
        }
        else{
            cout << "NO
";
        }
    }
    return 0;
}