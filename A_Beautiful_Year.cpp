#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0; i<(n); i++)
#define rrep(i,s,n) for(int i=(n)-1; i>=(s); i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

#define debug(x) cerr << #x << " = " << x << "\n"
#define debug2(x,y) cerr << #x << " = " << x << ", " << #y << " = " << y << "\n"

using ll = long long;
using vec = vector<ll>;
using pii = pair<ll,ll>;
using mapi = map<ll,ll>;
using si = set<ll>;

const ll MOD = 1e9+7;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int N = 2e5+5;


bool isDistint(int year){
    string s = to_string(year) ;
    set<char> st (s.begin() , s.end()) ;
    return s.size() == st.size() ;
}

int32_t main() {
    fast;

    int y ;
    cin >> y ;

    while(true) {

        y++ ;
        if(isDistint(y)){ 
        cout << y << endl ;
        break ;       
        }

    }
    return 0;
}