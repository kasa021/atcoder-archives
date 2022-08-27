/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/34360659
 * Submitted at: 2022-08-27 06:55:38
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
 * Result: AC
 * Execution Time: 93 ms
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

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    rep(i,10){
        rep(j,10){
            rep(k,10){
                string t;
                t+=(i+'0');
                t+=(j+'0');
                t+=(k+'0');
                //cout<<t<<endl;
                int ind=0;
                bool f=false;
                rep(l,n){
                    if(ind==3)break;
                    if(t[ind]==s[l]){
                        ind++;
                    }
                }
                if(ind==3) f=true;
                if(f){
                    //cout<<t<<endl;
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}