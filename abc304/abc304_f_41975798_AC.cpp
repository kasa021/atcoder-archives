/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41975798
 * Submitted at: 2023-06-03 13:52:57
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_f
 * Result: AC
 * Execution Time: 39 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
#define mint modint998244353

vector<int> enum_div(int n){
    vector<int> res;
    res.push_back(1);
    // if(n!=1) res.push_back(n);
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res.push_back(i);
            if(i*i != n){
                res.push_back(n/i);
           }
       }
   }
return res;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> dot; // .の位置
    rep(i,n){
        if(s[i]=='.') dot.push_back(i);
    }
    vector<int> divisor = enum_div(n);  // 約数
    sort(all(divisor));
    vector<mint> mp(n + 9);  // 約数ごとの場合の数
    set<int> st;  // 使った約数を入れておく
    rep(i,divisor.size()){
        vector<char> t(divisor[i],'x');  // xで初期化
        rep(j,dot.size()){
           t[dot[j] % divisor[i]] = '#'; // #で確定
        }
        // Xのものはどっちでもいい
        mint cnt = 1;
        rep(j,divisor[i]){
            if(t[j]=='x') cnt *= 2;
        }
        mp[divisor[i]] = cnt;
        vector<int> u=enum_div(divisor[i]);  // 約数の約数
        for(int j=0;j<u.size();j++){
            if (st.count(u[j])) mp[divisor[i]] -= mp[u[j]];  // 使った約数の約数は引く
        }
        st.insert(divisor[i]);
    }
    mint ans = 0;
    // rep(i,n){
    //     // ans += mp[i];
    // }
    rep(i,divisor.size()){
        ans += mp[divisor[i]];
        // cout<< divisor[i]<<" "<<mp[divisor[i]].val() << endl;
    }
    cout << ans.val() << endl;
}