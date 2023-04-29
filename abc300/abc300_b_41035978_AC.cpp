/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41035978
 * Submitted at: 2023-04-29 12:32:13
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int h, w;
vector<string> shif(vector<string> c,int s,int t){
    vector<string> res=c,dd=c;
    string ss=res[h-1];
    // cout<< ss << endl;
    // cout<<endl;
    rep(i,s){
        rep(j,h-1){
            res[j+1]=dd[j];
        }
        res[0]=dd[h-1];
        dd=res;
    }

    dd=res;

    rep(i,t){
        rep(j,w-1){
            rep(k,h){
                res[k][j+1]=dd[k][j];
            }
        }
        rep(k,h) res[k][0]=dd[k][w-1];
        dd=res;
    }
    // cout<<"s "<<s<<" "<<"t "<<t<<endl;
    // rep(i,h) cout<< res[i] << endl;
    return res;

}

int main(){
      cin>>h>>w;
      vector<string> a(h),b(h);
      rep(i,h) cin>>a[i];
      rep(i,h) cin>>b[i];
      vector<string> c(h);
      c=a;
      rep(s,h+1){
        rep(t,w+1){
            vector<string> res=shif(c,s,t);
            bool f=true;
            rep(i,h){
                rep(j,w){
                    if(res[i][j]!=b[i][j]) f=false;
                }
            }
            if(f){
                cout<< "Yes" << endl;
                return 0;
            }
        }
      }
      cout<< "No" << endl;
    }