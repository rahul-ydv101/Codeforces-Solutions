#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    string s ;
    cin >> n >> s ;
    int ans = 0 ; 
    for(int i = 0 ; i < n - 1 ; i++){
        if(s[i] == s[i+1]) ans ++ ;
    }

    cout << ans ;

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
    return 0;
}