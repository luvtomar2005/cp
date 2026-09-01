#include <iostream>
#include <string> 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >>n;
        string s;
        cin >> s;
        int dots = 0;
        bool threeDots = false;
        for(int i =0;i<n;i++){
            if(s[i] == '.') dots++;
        }
 
        for(int i = 0;i<n;i++){
            if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
                threeDots = true;
            }
        }
        if(threeDots){
            cout << 2 << endl;
        }
        else{
            cout << dots << endl;
        }
 
    }
    return 0;
}