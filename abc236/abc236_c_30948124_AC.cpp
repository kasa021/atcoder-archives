/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/30948124
 * Submitted at: 2022-04-13 12:06:04
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_c
 * Result: AC
 * Execution Time: 287 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    rep(i,n) cin>>s[i];
    set<string> st; //set<string>が型の名前、stが変数の名前
    rep(i,m){
        string t;
        cin>>t;
        st.insert(t);
    }
    rep(i,n){
        if(st.count(s[i])){//stの中にs[i]と同じ要素があれば、なければ0を返す。
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<< endl;
        }
    }
    return 0;
}