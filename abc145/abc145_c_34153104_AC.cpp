/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/34153104
 * Submitted at: 2022-08-20 02:52:30
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep1(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

double dis(int x, int y,int z,int w){
    double d=sqrt(1.0*(x-z)*(x-z)+1.0*(y-w)*(y-w));
    return d;
}

int kai(int n){
    if(n==1) return 1;
    else return n*kai(n-1);
}

int main() {
    int n;
    cin>>n;
    int x[n],y[n];
    rep(i,0,n) cin>>x[i]>>y[i];
    vector<int> ord;
    rep(i,0,n) ord.push_back(i);

    double sum=0;
    do{
        rep(i,0,n-1){
            long double dx=x[ord[i]]-x[ord[i+1]];
            long double dy=y[ord[i]]-y[ord[i+1]];
            sum+=sqrt(dx*dx+dy*dy);
        }
    }while(next_permutation(all(ord)));

    rep(i,0,n) sum/=(i+1);
    printf("%10f\n",sum);
    return 0;
}
