/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/36136055
 * Submitted at: 2022-11-01 09:45:36
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_c
 * Result: AC
 * Execution Time: 9 ms
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
   int x,now;
   cin>>x;
   now=x;

   while(true){
    if(isprime(now)){
        cout<< now << endl;
        return 0;
    }else{
        now++;
    }
   }
}