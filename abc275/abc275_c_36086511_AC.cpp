/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36086511
 * Submitted at: 2022-10-30 05:26:22
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_c
 * Result: AC
 * Execution Time: 286 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<P,P,P,P> T;


int main() {
    int ans=0;
    vector<string> r(10);
    rep(i,9) cin>>r[i];
    
    rep(i,9) rep(j,9){
        rep(k,9) rep(l,9){
            rep(p,9) rep(q,9){
                rep(s,9) rep(t,9){
                    P a,b,c,d;
                    a=P(i,j);
                    b=P(k,l);
                    c=P(p,q);
                    d=P(s,t);
                    if(a==b||a==c||a==d||b==c||b==d||c==d) continue;
                    if(r[i][j]=='#'&r[k][l]=='#'&&r[p][q]=='#'&&r[s][t]=='#'){
                        int dis1,dis2,dis3,dis4;
                        dis1=(i-k)*(i-k)+(j-l)*(j-l);
                        dis2=(i-s)*(i-s)+(j-t)*(j-t);
                        dis3=(p-k)*(p-k)+(q-l)*(q-l);
                        dis4=(p-s)*(p-s)+(q-t)*(q-t);
                        a=P(i-s,j-t);
                        b=P(k-i,l-j);
                        c=P(s-k,t-l);
                        int res1,res2,res3;
                        res1=a.first*b.first+a.second*b.second;
                        res2=c.first*b.first+c.second*b.second;
                        res3=c.first*a.first+c.second*a.second;
                        if(dis1==dis2&&dis1==dis3&&dis1==dis4){
                            if(res1==0||res2==0||res3==0){
                                ans++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<< ans/8 << endl;
}