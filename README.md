# Template
This Is My Competitive Programming Template.

```
#include "bits/stdc++.h" // www.shivam.app //
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define br cout << '\n'
#define cn(x) cin >> x
#define ct(x) cout << x << '\n'
#define sz(v) (v.size())
#define bin(y,x) bitset<y>(x)
#define all(v) v.begin(), v.end()
#define rll(v) v.rbegin(), v.rend()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define popcnt(x) __builtin_popcountll(x)
#define dbg(var) cout<<#var<<'='<<var<<' '
#define fr(i,n) for(int i=0; i<(n); i++)
#define frr(i,a,n) for(int i=(a); i<(n); i++)
#define frb(i, n) for(int i=(n)-1; i>=0; i--)
#define frrb(i,a,n) for(int i=(n)-1; i>=(a); i--)
#define MOD 1000000007

int modmul(int a, int b) { return ((a % MOD) * (b % MOD)) % MOD; }
int modadd(int a, int b) { return ((a % MOD) + (b % MOD)) % MOD; }
int modsub(int a, int b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }
int modfac(int n) { int res = 1; frr(i, 2, n+1) res = modmul(res, i); return res; }
int modpow(int a, int p) { return p?modmul(modpow(modmul(a, a), p/2), p&1?a:1):1; }

template<typename T>istream&operator>>(istream&i,vector<T>&v){for(auto&x:v)i>>x;return i;}
template<typename K,typename V>istream&operator>>(istream&i,pair<K,V>&p){return i>>p.first>>p.second;}
template<typename T>struct p:false_type{};template<typename K,typename V>struct p<pair<K,V>>:true_type{};
template<typename K,typename V>ostream&operator<<(ostream&o,const pair<K,V>&p){return o<<p.first<<' '<<p.second;}
template<typename T>auto operator<<(ostream&o,const T&c)->enable_if_t<!is_same_v<T,string>,decltype(c.begin(),o)>
{bool shivam=0; for(auto&i:c) {if(shivam)o<<(p<typename T::value_type>::value?'\n':' ');o<<i;shivam=1;}return o;}
template<typename T> using ordered = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void solve(){
    





}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); int t = 1;
    cin >> t; // testcase
    while (t--) solve();
    return 0;
}
```
