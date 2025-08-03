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

struct tn {
  vi adj;
  ch c;
  bl end;

};


vs triepref(int r, vector<tn>& g) {
    vs p;
    stack<pair<int, str>> st;
    st.push({r, ""});
    while (!st.empty()) {
        pair<int, str> u = st.top();
        st.pop();
        if(u.f != r) u.s += g[u.f].c;
        if(g[u.f].end) p.pb(u.s);
        for (int i = g[u.f].adj.size() - 1; i >= 0; i--) st.push({g[u.f].adj[i], u.s});
    }
    return p;
}
void triein(str x, vector<tn>& g) {
    cntr(n);
    forl(x.size()) {
        int e = -1;
        for (int j = 0; j < g[n].adj.size(); j++)
            if (g[g[n].adj[j]].c == x[i]) {
              e = g[n].adj[j];
              break; 
            }
        if (e == -1) {
            g.pb({{}, x[i], fa});
            g[n].adj.pb(g.size() - 1);
        }
        e == -1 ? n = g.size() - 1 : n = e;
    }
    g[n].end = tr;
}

int main (){
    setcio;
    int n;
    cin >> n;
    vector<tn> g = {{{}, '\0', fa}};
    while (n--) {
      str x;
      cin >> x;
      triein(x, g);
    }
    str y;
    while (cin >> y) {
      int w = 0;
      forl(y.size()) {
        for(int j = 0; j < g[w].adj.size(); j++) {
          if (g[g[w].adj[j]].c == y[i]) {
            w = g[w].adj[j];
            br;
          }
        }
      }
      vs suf = triepref(w, g);
      cout << "Did you mean:\n" fl;
      forl(suf.size()) cout << y << suf[i] << '\n' fl;
    }
    ret 0;
}