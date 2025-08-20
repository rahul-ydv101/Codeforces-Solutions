#include <bits/stdc++.h>
using namespace std;

void solve(){

    long long k , n , w ;
    cin >> k >> n >> w ;

    long long total = (k * (w * (w + 1)) / 2 ) ;
    long long borrow = total - n ;

    if(borrow <= 0) cout << 0 ;
    else cout << borrow ;

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
    return 0;
}