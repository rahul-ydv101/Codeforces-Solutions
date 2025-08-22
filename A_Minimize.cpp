#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a , b ;  
   cin >> a >> b ;
   cout << b - a << endl ;
}

int main(){
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

// (c - b) + (b - c) 
// = b-a hence min value is b - a doesnot depend on c ;