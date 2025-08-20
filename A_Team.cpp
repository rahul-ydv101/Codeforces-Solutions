#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    int a , b , c ;
    int ans  = 0 ;
    while(n--){
        cin >> a >> b >> c ;
        if(a + b + c >= 2) ans++ ;
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