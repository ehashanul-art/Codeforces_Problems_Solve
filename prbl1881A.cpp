#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        string cur = x;
        int limit = n + m;
 
        if (cur.find(s) != string::npos) {
            cout << 0 << "\n";
            continue;
        }
 
        int ans = -1;
 
        for (int k = 1; k <= 60; k++) {
            string nxt = cur + cur;
            if ((int)nxt.size() > limit) {
                nxt = nxt.substr(0, limit);
            }
 
            cur = nxt;
 
            if (cur.find(s) != string::npos) {
                ans = k;
                break;
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}