/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/34658638
 * Submitted at: 2022-09-06 13:49:43
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    string a,b;
    cin>>a>>b;
    int sizea=a.size(),sizeb=b.size();
    while(sizea-1>=0&&sizeb-1>=0){
        int s=(a[sizea-1]-'0')+(b[sizeb-1]-'0');
        if(s>=10){
            cout<< "Hard" << endl;
            return 0;
        }
        sizea--;
        sizeb--;
    }
    cout<< "Easy" << endl;
}