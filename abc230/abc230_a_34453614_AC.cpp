/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/34453614
 * Submitted at: 2022-08-30 04:10:34
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_a
 * Result: AC
 * Execution Time: 10 ms
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
    if(n>=42){
        cout<<"AGC0"<<n+1<<endl;
    }else if(n<10) {
        cout<<"AGC00"<<n<<endl;
    }else cout<<"AGC0"<<n<<endl;
}