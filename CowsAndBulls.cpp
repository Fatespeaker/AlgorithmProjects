//  Name: Mikaela Tereshkov
//     Date: 11/13/2025       


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
using ull=unsigned long long;
using vd = vector<double>;
using dbl = double;
using flt = float;
using bl = bool;
using chr = char;
using vlls = vector<lls>;
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

#define sor(SORT) sort(SORT.begin(), SORT.end())
#define rsor(SORT) sort(SORT.rbegin(), SORT.end())
#define tc int TESTCASES; cin >> TESTCASES; while(TESTCASES--)
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define prepfio(IN, OUT) ifstream fin(IN); ofstream fout(OUT)
#define fillv(VECTOR, SIZE) for (int POPINDEX = 0; POPINDEX < SIZE; POPINDEX++) cin >> VECTOR[POPINDEX]
#define forl(LIMIT) for (int i = 0; i < LIMIT; i++)
#define jforl(LIMIT) for (int j = 0; j < LIMIT; j++)
#define cforl(VARIABLE, LIMIT) for (int VARIABLE = 0; VARIABLE < LIMIT; VARIABLE++)
#define rforl(LIMIT) for (int i = LIMIT; i >= 0; i--)
#define ynf(YNFLAG) if (YNFLAG) cout << "YES\n"; else cout << "NO\n"; cout.flush()
#define yn(YNFLAG) if (YNFLAG) cout << "YES\n"; else cout << "NO\n"
#define fill2d(GRID, COLUMNS, ROWS) for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLUMNS; j++) cin >> GRID[i][j]

int main (){
  vector<bool>imp(9877, false);
  for(int ASDF=0; ASDF<7; ASDF++){
    str x="0123";
    int mw=INT_MAX;
    for(int i=123; i<=9876; i++){
      int pv[5][5]={};
      if(imp[i])cont;
      str cr=to_string(i);
      if(cr.size()==3)cr='0'+cr;
      if(cr[0]==cr[1]||cr[0]==cr[2]||cr[0]==cr[3]||cr[1]==cr[2]||cr[2]==cr[3]||cr[1]==cr[3])cont;
      for(int j=123; j<=9876; j++){
        if(imp[j])cont;
        str cr2=to_string(j);
        if(cr2.size()==3)cr2='0'+cr2;
        if(cr2[0]==cr2[1]||cr2[0]==cr2[2]||cr2[0]==cr2[3]||cr2[1]==cr2[2]||cr2[2]==cr2[3]||cr2[1]==cr2[3])cont;
        int a=0,b=0;
        for(int k=0; k<4; k++){
          if(cr[k]==cr2[k])a++;
          else if(cr.find(cr2[k])!=string::npos) b++;
        }
        pv[a][b]++;
      }
      int cm=0;
      for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
          cm=max(cm, pv[i][j]);
        }
      }
      if(cm<mw){
        x=cr; mw=cm;
      }
    }
    cout<<"Guess: " +x<<'\n';
    int cw, bl;
    cout<<"Bulls: "; cin>>bl;
    cout<<"Cows: "; cin>>cw;
    if(bl==4)ret 0;
    for(int i=123; i<=9876; i++){
      int cc=0, cb=0;
      if(imp[i])cont;
      str cr2=to_string(i);
      if(cr2.size()==3)cr2='0'+cr2;
      if(cr2[0]==cr2[1]||cr2[0]==cr2[2]||cr2[0]==cr2[3]||cr2[1]==cr2[2]||cr2[2]==cr2[3]||cr2[1]==cr2[3])cont;    
      for(int j=0; j<4; j++){
        if(x[j]==cr2[j])cb++;
        else if(x.find(cr2[j])!=string::npos) cc++;
      }
      if(cc!=cw||cb!=bl) imp[i]=true;
    }
  }
  ret 0;
} 
