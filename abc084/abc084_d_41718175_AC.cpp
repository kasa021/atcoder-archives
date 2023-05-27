/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/41718175
 * Submitted at: 2023-05-27 05:34:30
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_d
 * Result: AC
 * Execution Time: 245 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

// エラトステネスの篩の計算量はO(NloglogN)であることが知られている
// 計算量解析については自分で調べてみてね
vector<int> sieve_of_eratosthenes(int n) { // sieve_of_eratosthenesこれでエラトステネスの篩っていうらしい
    vector<int> primes;                 // これは素数を格納する配列
    vector<bool> is_prime(n + 1, true); // これは素数かどうかを判定する配列
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

vector<int> similar_to_2017(vector<int>& primes){ // 10^5以下の素数の数は1229個
    vector<int> res;
    for(int i=0; i<primes.size();i++){
        bool is_prime = true;
		if(primes[i]==2) continue;
		int tmp = (primes[i]+1)/2;
        for(int i=2;i*i<=tmp;i++){  // (N+1)/2が素数かどうかを判定する
            if(tmp%i==0){
                is_prime = false;
                break;
            }
        }
        if(is_prime) res.push_back(primes[i]);
    }
    return res;
}

int main() {
    int q;
    cin >> q;
    vector<int> primes = sieve_of_eratosthenes(100000);  // 10^5以下の素数を列挙する
    vector<int> similar_primes = similar_to_2017(primes); // 10^5以下の素数のうち、(N+1)/2が素数であるものを列挙する
    rep(i,q){
        int l,r;
        cin >> l >> r;
		int index_l=-1,index_r=-1;
		rep(j,similar_primes.size()){
			if(similar_primes[j]>=l){
				index_l = j;
				break;
			}
		} 
		// lがsimilar_primesにある値より大きい場合は、index_lは-1のままになるのでここでindex_lを更新する
		if(index_l==-1) index_l = similar_primes.size(); // l以上の最小の素数のindexを取得する
		rep(j,similar_primes.size()){
			if(similar_primes[j]>r){
				index_r = j;
				break;
			}
		}
		// rがsimilar_primesにある値より大きい場合は、index_rは-1のままになるのでここでindex_rを更新する
		if(index_r==-1) index_r = similar_primes.size(); // rより大きい最小の素数のindexを取得する
        cout << index_r-index_l << endl;
    }
}
