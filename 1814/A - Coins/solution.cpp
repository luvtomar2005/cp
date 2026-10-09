#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; 
    cin >> t; 
    while (t--) 
    {
        long long n, k; 
        cin >> n >> k; 
      
        if (n % 2 == 0 || (n - k) % 2 == 0) // we took y = 0 or y = 1
            cout << "YES" << endl; // Output "YES" if it is possible to represent n
        else
            cout << "NO" << endl; // Output "NO" if it is not possible to represent n
    }
    return 0; // Return 0 to indicate successful execution
}
 
// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)