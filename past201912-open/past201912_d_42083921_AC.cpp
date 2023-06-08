/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/42083921
 * Submitted at: 2023-06-08 16:29:24
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_d
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n),cnt(n+1,0);
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n;i++){
        cnt[a[i]-1]++;
    }
    int not_exist = 0, duplication = 0;
    for (int i = 0; i < n;i++){
        if(cnt[i]==0){
            not_exist = i + 1;
        }
        if(cnt[i]==2){
            duplication = i + 1;
        }
    }
    if(not_exist==0&&duplication==0){
        cout << "Correct" << endl;
    }else{
        cout << duplication << " " << not_exist << endl;
    }
}