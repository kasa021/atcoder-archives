/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/37054463
 * Submitted at: 2022-12-06 06:52:14
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_e
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

set<ll> f(){
    set<ll> res;
    for(int fir=1;fir<=9;fir++){
        for(int d=-9;d<=8;d++){
            string s;
            int dg=fir;
            for(int i=0;i<18;i++){
                s.push_back(dg+'0');
                res.insert(stoll(s));
                dg+=d;
                if(!(0<=dg && dg<=9)) break;
            }
        }
    }
    return res;
}

int main() {
    ll x;
    cin>>x;
    set<ll> st=f();
    cout<< (*st.lower_bound(x)) << endl;
}
   
