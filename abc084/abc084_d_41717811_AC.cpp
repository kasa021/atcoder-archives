/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/41717811
 * Submitted at: 2023-05-27 05:11:08
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_d
 * Result: AC
 * Execution Time: 205 ms
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
		// 二分探索でl以上r以下の範囲にある素数の個数を求める
        int ans = upper_bound(similar_primes.begin(),similar_primes.end(),r) - lower_bound(similar_primes.begin(),similar_primes.end(),l);
        cout << ans << endl;
    }
}
