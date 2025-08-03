// Name: Mikaela Tereshkov
// Date: 7/21/2025


#include <bits/stdc++.h>
using namespace std;
using str = string;
using ll = long long;
using lls = unsigned long long int;
using i128 = __int128;
using vi = vector<int>;
using gi = vector<vector<int>>;
using vll = vector<long long>;
using vs = vector<string>;
using pii = pair<int, int>;
using vvi = vector<vector<int>>;
using vd = vector<double>;
using dbl = double;
using trieadj = vector<pair<vector<int>, pair<char, bool>>>;
using flt = float;
using bl = bool;
using ch = char;
#define f first
#define s second
#define qu queue
#define cont continue
#define br break
#define cntr(NAME) int NAME = 0 
#define tc int TESTCASES; cin >> TESTCASES; while(TESTCASES--)
#define setcio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define prepfio(IN, OUT) ifstream fin(IN); ofstream fout(OUT)
#define fl ; cout.flush()
#define fill(VECTOR, SIZE) for (int POPINDEX = 0; POPINDEX < SIZE; POPINDEX++) cin >> VECTOR[POPINDEX]
#define forl(LIMIT) for (int i = 0; i < LIMIT; i++)
#define rforl(LIMIT) for (int i = LIMIT; i >= 0; i--)
#define tr true
#define fa false
#define pb push_back
#define eb emplace_back
#define yn(YNFLAG) YNFLAG ? cout << "YES" : cout << "NO"
#define dec(PRESICION) fixed << setprecision(PRESICION)
#define beg begin
#define rbeg rbegin
#define ret return

str AHU(vvi& g, int x) {
  vs y;
  if (g[x].size() == 0) ret "()";
  forl(g[x].size()) y.pb(AHU(g, g[x][i]));
  sort(y.beg(), y.end());
  str r = "";
  for (int i = 0; i < y.size(); i++) r+=y[i];
  ret '(' + r + ')';
}

int main (){
  setcio;
  tc {
    int n, r = 0;
    cin >> n;
    vvi g(n);
    vi d(n);
    forl(n - 1) {
      int x, y;
      cin >> x >> y;
      g[x].pb(y);
      d[y]++;
    }
    for (r; r < n; r++) if (d[r] == 0) br;
    cout << AHU(g, r) << '\n' fl;
  }
    ret 0;
}