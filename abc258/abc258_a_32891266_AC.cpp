/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32891266
 * Submitted at: 2022-07-02 12:04:57
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int n;
    cin>>n;
    if(n<10){
        cout<<"21:0"<<n<<endl;
    }else if(n<60){
        cout<<"21:"<<n<<endl;
    }else if(n<70){
        cout<<"22:0"<<n-60<<endl;
    }else{
        cout<<"22:"<<n-60<<endl;
    }
    return 0;
}