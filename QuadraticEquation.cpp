//  Name: Mikaela Tereshkov 
//     Date: 8/22/2025       


#include <bits/stdc++.h>
using namespace std;

/** variables **/

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
using flt = float;
using bl = bool;
using ch = char;
#define prq priority_queue

/** keywords **/

#define f first
#define s second
#define qu queue
#define cont continue
#define br break
#define beg begin
#define rbeg rbegin
#define ret return
#define rev reverse
#define dist distance
#define tr true
#define fa false
#define pb push_back
#define pob pop_back
#define eb emplace_back
#define ins insert
#define fl ; cout.flush()
#define lfl cout.flush()
#define dec(PRESICION) fixed << setprecision(PRESICION)

/** lines **/

#define cntr(NAME) int NAME = 0 
#define tc int TESTCASES; cin >> TESTCASES; while(TESTCASES--)
#define setcio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define prepfio(IN, OUT) ifstream fin(IN); ofstream fout(OUT)
#define fill(VECTOR, SIZE) for (int POPINDEX = 0; POPINDEX < SIZE; POPINDEX++) cin >> VECTOR[POPINDEX]
#define forl(LIMIT) for (int i = 0; i < LIMIT; i++)
#define cforl(VARIABLE, LIMIT) for (int VARIABLE = 0; VARIABLE < LIMIT; VARIABLE++)
#define rforl(LIMIT) for (int i = LIMIT; i >= 0; i--)
#define yn(YNFLAG) if (YNFLAG) cout << "YES\n"; else cout << "NO\n"; cout.flush()
#define fill2d(GRID, COLUMNS, ROWS) for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLUMNS; j++) cin >> GRID[i][j]

/** structures **/

struct tn {
  vi adj;
  ch c;
  bl end;
};

/** constants **/

int dr[] = {0, 1, 0, -1};
int dc[] = {1, 0, -1, 0};

/** prototypes **/

//Nothing to see here....

/** ---------- -temporary- ---------- **/



/** ----------   -main-   ---------- **/

int main (){
  setcio;
  cout << "Enter A, B, and C for equation Ax^2 + Bx + C = 0: " fl;
  long double a, b, c; cin >> a >> b >> c;
  cout << "Soltuions: ";
  if (a == 0 && b == 0 && c == 0) {cout << "-1\n"; ret 0;}
  else if ((a == 0 && b == 0 && c != 0)) {cout << "0\n"; ret 0;}
  else if (a == 0) {cout << "1\n" << dec(5) << -c/b; ret 0;}
  else if (b == 0 && c == 0) {cout << "1\n0"; ret 0;}
  else {
    double x = (b * b) - (4 * a * c);
    if (x == 0) {
      cout << "1\n";
      cout << dec(5) << (-b) / (2 * a);
    } else if (x < 0){
      cout << "0\n";
    } else {
      x = sqrt(x);
      cout << "2\n" << dec(5) << min((-b + x) / (2 * a), (-b - x) / (2 * a)) << '\n' << max((-b + x) / (2 * a), (-b - x) / (2 * a));
    }
  }
  ret 0;
}

/** ---------- -clipboard- ---------- **/
/*



*/
/** ---------- -library- ---------- **/


//Nothing to see here...