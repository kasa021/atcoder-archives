/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34426742
 * Submitted at: 2022-08-28 12:17:27
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_a
 * Result: AC
 * Execution Time: 6 ms
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
    cin>>s;
    int size=s.size();
    cout<<s[(size+1)/2-1]<<endl;
}