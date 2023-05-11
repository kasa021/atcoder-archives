/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/41297846
 * Submitted at: 2023-05-11 02:50:09
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)

int main(){
  // ３文字の文字列で今回は受け取る
  string s; 
  cin>>s;
  if(s[0]==s[1] && s[1]==s[2]) cout<<"Won"<<endl; // 3文字が全て等しいかを見る
  else cout<<"Lost"<<endl;
  return 0;

  // charで受け取る場合
  // char a,b,c;
  // cin>>a>>b>>c;
  // if(a==b && b==c) cout<<"Won"<<endl;
  // else cout<<"Lost"<<endl;
  // return 0;

  // vector<char> で受け取る場合
  // vector<char> s(3);
  // rep(i,3) cin>>s[i];  // vector<char> で受け取るときは添え字を使うので
                          // rep(i,3) で受け取れる
  // if(s[0]==s[1] && s[1]==s[2]) cout<<"Won"<<endl;
  // else cout<<"Lost"<<endl;
  // return 0;

}