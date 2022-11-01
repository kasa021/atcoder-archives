/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc017/submissions/36136085
 * Submitted at: 2022-11-01 09:47:39
 * Problem URL: https://atcoder.jp/contests/arc017/tasks/arc017_1
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

bool isprime(int x){
    int i;
    for(int i=2;i*i<=x;i++){
       if(x%i==0) return false;
    }
    return true;
}
int main() {
   int a;
   cin>>a;
   cout << (isprime(a) ? "YES" : "NO") << endl;
}