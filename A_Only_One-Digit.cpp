#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    int mini = 9 ;
    if(n == 0){
        cout << 0 << endl ;
        return ;
    }

    while(n){
        int digit = n % 10 ;
        if(digit < mini) mini = digit ;
        n = n / 10 ;
    }
    cout << mini << endl ;

}

int main(){
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
