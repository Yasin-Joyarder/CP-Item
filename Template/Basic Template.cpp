// starting with the name of almighty ALLAH
//solved by E_M_T_I
//  Practice is the one and only shortcut to improve
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x, y) make_pair(x, y)
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rvs(v) reverse(v.begin(), v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pii pair<int, int>
#define coutv(v) for (auto it : v) cout << it << ' '; cout << endl;
#define cinv(v) for (auto &it : v) cin >> it;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) {
  return uniform_int_distribution<int>(l, r)(rng);
}
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using ordered_set =tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
void solve() {
  //ordered_set<int>os;
  int a,b;
  cin >> a >> b;
  cout << a*b << "\n";
}
int main() {
  /*#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif*/
  fastio;
  int t = 1;
  //cin >> t;
  for (int cs = 1; cs <=t; cs++) {
    //cout << "Case " << cs << ": ", solve();
    //printf("Case %d: ", cs), solve();
    solve();
  }
  return 0;
}
