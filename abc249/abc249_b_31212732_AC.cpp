/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31212732
 * Submitted at: 2022-04-23 14:09:16
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    string s;
    cin>>s;

    bool upper = false, lower =false;
    set<char> st;
    for(char c:s){
        if(isupper(c)) upper = true;
        if(islower(c)) lower = true;
        st.insert(c);
    }
    if(upper&&lower&&st.size() == s.size()){//st.size() == s.size()が文字が重複してない条件
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;

}