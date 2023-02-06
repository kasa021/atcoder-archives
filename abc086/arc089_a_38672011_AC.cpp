/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc086/submissions/38672011
 * Submitted at: 2023-02-06 12:27:47
 * Problem URL: https://atcoder.jp/contests/abc086/tasks/arc089_a
 * Result: AC
 * Execution Time: 62 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> t(N);
  vector<int> x(N);
  vector<int> y(N);
  for(int i = 0; i < N; ++i){
    cin >> t[i] >> x[i] >> y[i];
  }
  
  bool flag = true;
  
  int pt = 0, px = 0, py = 0; 
  
  for(int j = 0; j < N; ++j){
    
    int T = t[j] - pt, X = abs(x[j] - px), Y = abs(y[j] - py); 
    
    if(T < X + Y){
      flag = false;
      break;
    }
    
    if(T % 2 != (X + Y) % 2){
      flag = false;
      break;
    }
    
    pt = t[j], px = x[j], py = y[j];
  }
  
  if(flag == true){
    cout << "Yes" <<endl;
  }
  else{
    cout << "No" <<endl;
  }
  
}
