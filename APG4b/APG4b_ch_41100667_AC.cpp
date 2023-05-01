/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/41100667
 * Submitted at: 2023-05-01 13:21:44
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ch
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> score){
    int ans=0;
    for(int i=0; i<score.size();i++) ans+=score[i];
    return ans;
}

void output(int sum_a,int sum_b,int sum_c){
    cout<<sum_a*sum_b*sum_c<<endl;
}

vector<int> input(int N){
    vector<int> vec(N);
    for(int i=0; i<N;i++) cin>>vec[i];
    return vec;
}

int main(){
    int N;
    cin>>N;
    vector<int> A=input(N);
    vector<int> B=input(N);
    vector<int> C=input(N);
    output(sum(A),sum(B),sum(C));
}