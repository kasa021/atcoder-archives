/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/34314102
 * Submitted at: 2022-08-24 13:46:21
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_c
 * Result: AC
 * Execution Time: 44 ms
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
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    rep(i,m) a[i]=i+1;
    vector<int> b(n);
    vector<int> mae(n);
    do{
        bool f=true;
        rep(i,n-1){
            if(a[i]>a[i+1]) f=false;
        }
        if(f){
            rep(i,n){
                b[i]=a[i];
            }
            if(mae!=b){
            rep(i,n){
                cout<<a[i]<<" ";
            }cout<<endl;
            }
           
            rep(i,n){
                mae[i]=a[i];
            }
            
        }
    }while(next_permutation(a.begin(),a.end()));
}