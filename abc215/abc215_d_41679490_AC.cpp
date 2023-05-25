/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc215/submissions/41679490
 * Submitted at: 2023-05-25 03:43:08
 * Problem URL: https://atcoder.jp/contests/abc215/tasks/abc215_d
 * Result: AC
 * Execution Time: 246 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)

vector<int> prime_factorization(int n){ // 素因数分解をする関数
    vector<int> res;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            res.push_back(i);
            n/=i;
        }
    }
    if(n!=1) res.push_back(n);
    return res;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    sort(a.begin(),a.end());
    vector<bool> number(m+9,true);
    rep(i,n){
        vector<int> res=prime_factorization(a[i]); // a[i]の素因数分解
        for(int j=0;j<res.size();j++){ // a[i]の素因数分解の要素を順番に見ていく
            if(number[res[j]]){
                for(int k=res[j];k<=m;k+=res[j]){ // a[i]の素因数分解の要素の倍数をfalseにする
                    number[k]=false;  // このアルゴリズムをエラトステネスの篩(ふるい)という
                }
            }
        }
    }
    vector<int> ans;
    rep1(i,1,m+1){
        if(number[i]) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    rep(i,ans.size()) cout<<ans[i]<<endl;

}
   
