/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc002/submissions/43063343
 * Submitted at: 2023-06-30 08:08:33
 * Problem URL: https://atcoder.jp/contests/agc002/tasks/agc002_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int) (n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
  ll a, b;
  cin>>a>>b;
  if(a<0 && b<0){
    if((b-a)%2==0){
      cout<<"Negative"<<endl;
    }else{
      cout<<"Positive"<<endl;
    }
  }else if(a<=0 && b>=0){
    cout<<"Zero"<<endl;
  }else{
    cout<<"Positive"<<endl;
  }
  
}
