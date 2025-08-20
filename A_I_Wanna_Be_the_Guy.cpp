#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> x(p);
    for (int i = 0; i < p; i++) {
        cin >> x[i];
    }

    int q;
    cin >> q;
    vector<int> y(q);
    for (int i = 0; i < q; i++) {
        cin >> y[i];
    }

    set<int> level;
    for (auto it : x) level.insert(it);
    for (auto it : y) level.insert(it);

    if ((int)level.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
    return 0;
}