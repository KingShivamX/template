#include "bits/stdc++.h" // KingShivamX //
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define br cout << "\n"
#define cn(x) cin >> x
#define ct(x) cout << x << "\n"
#define sz(v) (v.size())
#define bin(x,y) bitset<y>(x)
#define all(v) v.begin(), v.end()
#define fixed(n) fixed << setprecision(n)
#define srt(v) sort(all(v))
#define srtr(x) sort(x.rbegin(), x.rend())
#define srtc(x, c) sort(x.begin(), x.end(), c)
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define popcnt(x) __builtin_popcountll(x)
#define dbg(var) cout<<#var<<"="<<var<<" "
#define fr(i,n) for(int i=0; i<(n); i++)
#define frr(i,a,n) for(int i=(a); i<(n); i++)
#define frb(i, n) for(int i=(n)-1; i>=0; i--)
#define frrb(i,a,n) for(int i=(n)-1; i>=(a); i--)
#define vmx(x) *max_element(x.begin(), x.end())
#define vmn(x) *min_element(x.begin(), x.end())
#define MOD 1000000007

int modmul(int a, int b) { return ((a % MOD) * (b % MOD)) % MOD; }
int modadd(int a, int b) { return ((a % MOD) + (b % MOD)) % MOD; }
int modsub(int a, int b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }
int modfac(int n) { int res = 1; frr(i, 2, n+1) res = modmul(res, i); return res; }
int modpow(int a, int p) { int res = 1; for (a %= MOD; p; p >>= 1, a = modmul(a, a)) if (p & 1) res = modmul(res, a); return res; }

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename K, typename V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename K, typename V> using ordered_multimap = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using pbds_trie = trie<T, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update>;
template<typename T> istream &operator>>(istream &cin, vector<T> &a) { for (auto &x : a) cin >> x; return cin; }
template<typename K, typename V> istream &operator>>(istream &cin, pair<K, V> &a) { return cin >> a.first >> a.second; }
template<typename K, typename V> ostream &operator<<(ostream &cout, const pair<K, V> &a) { return cout << a.first << ' ' << a.second; }
template<typename K, typename V> ostream &operator<<(ostream &cout, const vector<pair<K, V>> &a) { for (auto &x : a) cout << x << '\n'; return cout; }
template<typename T> ostream &operator<<(ostream &cout, const vector<T> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
template<typename T> enable_if_t<is_same_v<T,set<typename T::key_type>>||is_same_v<T,multiset<typename T::key_type>>||is_same_v<T,ordered_set<typename T::key_type>>||is_same_v<T,ordered_multiset<typename T::key_type>>,ostream&>operator<<(ostream&cout,const T&a){for(auto it=a.begin();it!=a.end();++it)cout<<(it==a.begin()?"":" ")<<*it;return cout;}
template<typename T> enable_if_t<is_same_v<T,map<typename T::key_type,typename T::mapped_type>>||is_same_v<T,multimap<typename T::key_type,typename T::mapped_type>>||is_same_v<T,ordered_map<typename T::key_type,typename T::mapped_type>>||is_same_v<T,ordered_multimap<typename T::key_type,typename T::mapped_type>>,ostream&>operator<<(ostream&cout,const T&a){for(const auto&x:a)cout<<x.first<<' '<<x.second<<'\n';return cout;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void solve(){
    





}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); int t = 1;
    cin >> t; // testcase
    while (t--) solve();
    return 0;
}
