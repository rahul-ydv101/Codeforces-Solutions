#include <bits/stdc++.h>
using namespace std ;

void solve(){

    string s ;
    getline(cin , s) ;
    set<char> uneque ;
    for(char c : s){
        uneque.insert(c) ;
    }
    int distinctNo = uneque.size() ;

    if(distinctNo % 2 == 0) cout << "CHAT WITH HER!" << endl ;
    else cout << "IGNORE HIM!" << endl ;

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
    return 0;
}