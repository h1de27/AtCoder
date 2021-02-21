#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep (i, N) {
    cin >> A[i];
  }

  int ans = 0;
  for (int l = 0; l < N; l++) {
    int x = A[l];
    for (int r = l; r < N; r++) {
      x = min(x, A[r]);
      ans = max(ans, x * (r - l + 1));
    }
  }
  cout << ans << endl;
}
