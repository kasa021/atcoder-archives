/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/34453693
 * Submitted at: 2022-08-30 04:19:29
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_b
 * Result: AC
 * Execution Time: 8 ms
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
    string s;
    string t="oxxoxxoxxoxxoxxoxxoxxoxxoxx";
    cin>>s;
    int size=s.size();
    if(t.substr(0,size)==s||t.substr(1,size)==s||t.substr(2,size)==s){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
}