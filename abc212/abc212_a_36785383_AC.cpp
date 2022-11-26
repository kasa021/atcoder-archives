/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/36785383
 * Submitted at: 2022-11-26 06:44:21
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_a
 * Result: AC
 * Execution Time: 7 ms
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
    int a,b;
    cin>>a>>b;
    if(0<a && b==0){
        cout<< "Gold" << endl;
    }else if(a==0&&0<b){
        cout<< "Silver" << endl;
    }else {
        cout<< "Alloy" << endl;
    }
}
   
