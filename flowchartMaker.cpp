// Name: Mikaela Tereshkov
// Date: 10/8/2025
// Title: Flowchart Maker (For APCSA unit 2)


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
using pll = pair<ll, ll>;
using vvi = vector<vector<int>>;
using vd = vector<double>;
using dbl = double;
using flt = float;
using bl = bool;
using chr = char;

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
#define jforl(LIMIT) for (int j = 0; j < LIMIT; j++)
#define jrforl(LIMIT) for (int j = LIMIT; j >= 0; j--)
#define rforl(LIMIT) for (int i = LIMIT; i >= 0; i--)
#define yn(YNFLAG) YNFLAG ? cout << "YES\n" : cout << "NO\n"; cout.flush()
#define fill2d(GRID, ROWS, COLUMNS) for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLUMNS; j++) cin >> GRID[i][j]
#define vecout(VECTOR) for(int INDEX = 0; INDEX < VECTOR.size(); INDEX++) {cout << VECTOR[INDEX] << ' ';} cout << '\n'

/** ---------- -temporary- ---------- **/

struct node{
    str shape="";
    str val="";
    unordered_map<str,int> adj;
};

/** ---------- -main- ---------- **/
int main (){
  //setcio;
  cout<<"How many nodes in your flowchart?\n";
  int n;cin>>n;
  cout<<"How many edges in your flowchart? Edges are directed.\n";
  int e;cin>>e;
  cout<<"Enter node information\n";
  vector<node>x(n);
  for(int i=0; i<n; i++){
    cout<<"Id: "<<i<<'\n';
    cout<<"Enter shape: (Root, Rectangle or Triangle)";
    cin>>x[i].shape;
    cout<<"Enter text:";
    cin>>x[i].val;
  }
  cout<<"Enter edge information (0 based index) \n";
  cout<<"Format: (int)parent ID, (String) condition, (int) child ID\n";
  for(int i=0; i<e; i++){
    str s;
    int u,v; cin>>u>>s>>v;
    x[u].adj[s]=v+1;
  }
  cout<<"What is your root node?\n";
  int cr;cin>>cr;
  cout<<x[cr].val<<'\n';
  while(true){
    str a;cin>>a;
    if(x[cr].adj[a]==0){cout<<"Invalid\n"; cont;}
    cr=x[cr].adj[a]-1;
    cout<<x[cr].val<<'\n';
    if(x[cr].shape=="Rectangle") {br;}
  }
  ret 0;
}
