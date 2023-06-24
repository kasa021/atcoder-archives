/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42919464
 * Submitted at: 2023-06-24 13:03:18
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_c
 * Result: AC
 * Execution Time: 255 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int ha, wa;
  cin >> ha >> wa;
  vector<string> a(ha);
  rep(i, ha) cin >> a[i];

  int hb, wb;
  cin >> hb >> wb;
  vector<string> b(hb);
  rep(i, hb) cin >> b[i];

  int hx, wx;
  cin >> hx >> wx;
  vector<string> x(hx);
  rep(i, hx) cin >> x[i];


  rep(i,20){
    rep(j,20){ //  aの右端の
      rep(k,20){
        rep(l,20){
          vector<vector<char>> c(30, vector<char>(30, '.'));
          rep(m,ha){
            rep(n,wa){
              if(a[m][n] == '#'){
                c[i+m][j+n] = '#';
                // cout<<"a "<<i+m<<" "<<j+n<<endl;
              }
            }
          }
          rep(m,hb){
            rep(n,wb){
              if(b[m][n] == '#') c[k+m][l+n] = '#';
              // cout<<k+m<<" "<<l+n<<endl;
            }
          }
          bool ok = true;
          rep(m,hx){
            rep(n,wx){
              if(x[m][n] != c[10+m][n+10]) ok = false;
              // cout << c[10+m][n+10];
            }
            // cout << endl;
            // cout << endl;
          }
          rep(m,30){
            rep(n,30){
              if(c[m][n] == '#'){
                // cout<< m<<" "<<n<< endl;
                if(10>m || m>=10 + hx || 10>n || n>=10 + wx){
                  ok = false;
                }
              }
            }
          }
          if(ok){
            cout<< "Yes" << endl;
            return 0;
          }

        }
      }
    }
  }
  cout<< "No" << endl;
}