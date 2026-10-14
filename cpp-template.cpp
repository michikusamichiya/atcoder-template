// This library is shared in https://github.com/michikusamichiya/atcoder-template, cpp-template.cpp
// michikusamichiya!

/*

このライブラリはコンテスト中、いくつか編集されることがあります(BEGIN MY LIBRARYからEND MY LIBRARYまで)が、

それらの変更はすべて人の手によって行われていることを保証します。GitHubにて公開されているライブラリと提出コードにdiffがあった場合、それらは生成AIを用いて変更されたものではありません。

*/

/* AA ZONE
# Vulgate.
#
# +------------------+
# | 𝒲𝒽𝒶𝓉 𝓉𝒽ℯ 𝒻𝓊𝒸𝓀. |
# +------------------+
#
#  .　　 ∧_∧
# 　　 ( 'ω' )　殺す！
# 　　(m9 / 　　コイツ(michikusamichiya)は殺さないとダメだ！！！！
# 　　/　 /_つ
# 　 / /＼＼
# 　/ /　/ /
# （ノ　 ＼)
# ( ;∀;) < C++ is the best
# 
#
# 　__--‾\--
# /      |   ‾‾‾\‾
# /       /\  ||     \
*/

// ---------------------- BEGIN MY LIBRARY ----------------------

// Library Includes
#include <bits/stdc++.h>
using namespace std;
// Defines
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define REP(i, n) for (int i = 1; i <= (int)n; i++)
#define all(a) a.begin(), a.end()
#define FLASH cout << endl
#define sp << " " << 
#define each(i, a) for (auto& i : a)
#define BREAKPOINT cout << ""
#define RET return 0
#define CUE continue
#define BRE break

using ll = long long;
using ld = long double;
using p2i = pair<int, int>;
using p2l = pair<ll, ll>;
using p2is = pair<string, int>;
using ivec = vector<int>;
using lvec = vector<ll>;
struct Edge {
  int v; ll w;
  bool operator<(const Edge& other) const {
    if (w != other.w) return w < other.w;
    return v < other.v;
  }
};
struct IEdge {
  int v; ll w; int index;
  bool operator<(const Edge& other) const {
    if (w != other.w) return w < other.w;
    return v < other.v;
  }
};
struct rle_block {
  ll c; int le;
};
struct point {
  ll x, y;
};
struct pointf {
  ld x, y;
};
using grid = vector<string>;
using rle = vector<rle_block>;


vector<int> dx = {1,0,-1,0}, dy = {0,1,0,-1};
// vector<int> dx1 = {1,-1,0,0}, dy1 = {0,0,1,-1};
// vector<int> dx2 = {0,0,1,-1}, dy2 = {1,1-1,0,0};
char _space = ' ';
const string _alphabet = "abcdefghijklmnopqrstuvwxyz";
const string _Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int mod107 = 1000000007;
const int mod998 = 998244353;
using Graph = vector<vector<int>>;
using WGraph = vector<vector<Edge>>;

template <typename T, typename U>
istream& operator>>(istream& in, pair<T, U>& p) {
  return in >> p.first >> p.second;
}
template <typename T>
istream& operator>>(istream& in, vector<T>& v) {
  for (auto& x : v) in >> x;
  return in;
}
template <class T>
ostream& operator<<(ostream& out, vector<T>& v) {
  string f = "";
  rep(i, v.size()) f += to_string(v[i]) + " ";
  return out << f << endl;
}
template <class T>
pair<T, T> operator+(const pair<T, T>& a, const pair<T, T>& b) {
  return {a.first + b.first, a.second + b.second};
}
template <class T>
pair<T, T> operator-(const pair<T, T>& a, const pair<T, T>& b) {
  return {a.first - b.first, a.second - b.second};
}
template <class T>
pair<T, T> operator*(const pair<T, T>& a, const T& k) {
  return {a.first * k, a.second * k};
}
template <class T>
pair<T, T> operator*(const T& k, const pair<T, T>& a) {
  return {a.first * k, a.second * k};
}
template <class T>
pair<T, T> operator/(const pair<T, T>& a, const T& k) {
  return {a.first / k, a.second / k};
}
template <class T>
pair<T, T> operator-(const pair<T, T>& a) {
  return {-a.first, -a.second};
}
template <class T>
ostream& operator<<(ostream& out, const pair<T, T>& a) {
  return out << a.first << " " << a.second;
}




template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}

bool yesno(bool a) {
  cout << (a ? "Yes" : "No") << endl;
  return a;
}
bool YESNO(bool a) {
  cout << (a ? "YES" : "NO") << endl;
  return a;
}

// !!!TEMPLATES!!!

namespace bin {
  // v[i] >= x となる最小の i
  template<typename T> ll bs_ge(const vector<T>& v, T x) {
    auto it = lower_bound(v.begin(), v.end(), x);
    if (it == v.end()) return -1;
    return distance(v.begin(), it);
  }

  // v[i] > x となる最小の i
  template<typename T> ll bs_gt(const vector<T>& v, T x) {
    auto it = upper_bound(v.begin(), v.end(), x);
    if (it == v.end()) return -1;
    return distance(v.begin(), it);
  }

  // v[i] <= x となる最大の i
  template<typename T> ll bs_le(const vector<T>& v, T x) {
    auto it = upper_bound(v.begin(), v.end(), x);
    if (it == v.begin()) return -1;
    --it;
    return distance(v.begin(), it);
  }

  // v[i] < x となる最大の i
  template<typename T> ll bs_lt(const vector<T>& v, T x) {
    auto it = lower_bound(v.begin(), v.end(), x);
    if (it == v.begin()) return -1;
    --it;
    return distance(v.begin(), it);
  }
}
namespace mat {
  const ld PI = 3.141592653589793238462643383279502884L;
  const vector<ll> primeFact(ll n) {
    int k = 2;
    vector<ll> res;
    while (n != 1) {
      if (n % k == 0) {
        res.push_back(k);
        n /= k;
      } else {
        k++;
      }
    }
    return res;
  }
  const inline ld deg2rad(ld deg) {
    return deg * (PI / 180.0L);
  }
  // rad -> deg
  const inline ld rad2deg(ld rad) {
    return rad * (180.0L / PI);
  }
  ld dist(point a, point b) {
    return sqrtl((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
  }
  ld dist(pointf a, pointf b) {
    return hypotl(a.x - b.x, a.y - b.y);
  }
  ll modpow(ll a, ll e, ll mod) {
    ll r = 1;
    while (e) {
      if (e & 1) r = (__int128)r * a % mod;
      a = (__int128)a * a % mod;
      e >>= 1;
    }
    return r;
  }



  pair<ll, ll> radit(ll a, ll b) {
    assert(!(a == 0 && b == 0));
   
    if (b == 0) {
      return {1,0};
    }
   
    ll g = std::gcd(a, b);
    a /= g;
    b /= g;
   
    if (b < 0) {
      a *= -1;
      b *= -1;
    }
   
    return {a, b};
  }

  // floor(sqrt(n)) を整数で求める
  long long isqrt(long long n) {
    if (n < 0) throw invalid_argument("n must be non-negative");
    long long lo = 0, hi = 3037000500LL; // floor(sqrt(LLONG_MAX))
    while (lo < hi) {
      long long mid = lo + (hi - lo + 1) / 2;
      __int128 sq = (__int128)mid * mid;
      if (sq <= n) lo = mid;
      else hi = mid - 1;
    }
    return lo;
  }
   
  // floor(log10(n)) を整数で求める
  int ilog10(long long n) {
    if (n < 0) throw invalid_argument("n must be positive");
    if (n == 0) return 0;
    int d = 0;
    while (n >= 10) {
      n /= 10;
      ++d;
    }
    return d;
  }
  int ilog2(long long n) {
    if (n <= 1) return 0;
    int d = 0;
    while (true) {
      if (n % 2 == 0) {
        d++;
        n /= 2;
      } else {
        break;
      }
    }
    return d;
  }
  std::vector<bool> sieve(int64_t L, int64_t R) {
    int n = sqrt(R) + 1; 
    std::vector<bool> aux(n, true); 
    std::vector<bool> res(R - L, true); 
     
    for (int64_t i = 2; i * i < R; ++i) {
      if (!aux[i]) continue;
       
      for (int64_t j = i * i; j < n; j += i) {
        aux[j] = false;
      }
     
      for (int64_t j = std::max(i * i, (L + i - 1) / i * i); j < R; j += i) {
        res[j - L] = false;
      }
    }
    if (L == 0) {
      if (R > 0) res[0] = false;
      if (R > 1) res[1] = false;
    }
    if (L == 1) {
      res[0] = false;
    }
    return res;
  }
  int ngcd(vector<int> a){
    int res;
    res = a[0];
    for(int i = 1; i < a.size() && res != 1; i++) {
        res = gcd(a[i], res);
    }
    return res;
  }
  int nlcm(vector<int> numbers) {
    int res;
    res = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        res = lcm(res, numbers[i]);
    }
    return res;
  }
}
namespace tools {

  template<typename T> vector<pair<T, int>> asort(vector<T>& A) {
    vector<pair<T, int>> B(A.size());
    rep(i, A.size()) B[i] = { A[i], i };
    sort(all(B));
    return B;
  }

  template<typename... Args>
  void tuple_sort(vector<Args>&... vecs) {
    // Get the size of the first vector
    if (sizeof...(Args) == 0) return;
     
    vector<int> indices;
    int n = get<0>(tie(vecs...)).size();
    rep(i, n) indices.push_back(i);
     
    // Sort indices based on tuple comparison
    sort(indices.begin(), indices.end(), [&](int i, int j) {
      return tie(vecs[i]...) < tie(vecs[j]...);
    });
     
    // Reorder all vectors according to sorted indices
    (..., [&](auto& v) {
      vector<decay_t<decltype(v[0])>> temp(n);
      rep(k, n) temp[k] = v[indices[k]];
      v = temp;
    }(vecs));
  }
  struct combination {
    vector<ll> _fac;
    vector<ll> _finv;
    vector<ll> _inv;
    ll _mod;
    combination(int siz, ll mod) {
      _fac.resize(siz + 1);
      _finv.resize(siz + 1);
      _inv.resize(siz + 1);
      _mod = mod;
      _fac[0] = 1; _fac[1] = 1;
      _finv[0] = 1; _finv[1] = 1;
      _inv[1] = 1;
      for (int i = 2; i <= siz; i++) {
        _fac[i] = _fac[i - 1] * i % _mod;
        _inv[i] = _mod - _inv[_mod % i] * (ll)(_mod / i) % _mod;
        _finv[i] = _finv[i - 1] * _inv[i] % _mod;
      }
    }

    ll calc(int n, int k) {
      if (n < k || n < 0 || k < 0) return 0;
      return (ll)(
        (__int128)_fac[n]
        * _finv[k]
        % _mod
        * _finv[n - k]
        % _mod
      );
    }
     
  };
  rle to_rle(string& S){
    rle res;
    each(i, S){
      if (res.empty() || res.back().c != i) res.push_back(rle_block({i, 1}));
      else res.back().le++;
    }
    return res;
  }
  rle to_rle(vector<ll>& S){
    rle res;
    each(i, S){
      if (res.empty() || res.back().c != i) res.push_back(rle_block({i, 1}));
      else res.back().le++;
    }
    return res;
  }
  bool in_grid(int x, int y, int H, int W) {
    return 0 <= x && x < H && 0 <= y && y < W;
  }
   
  int count_adj(const vector<string>& S, int x, int y, int H, int W) {
    int c = 0;
    rep(d, 4) {
      int nx = x + dx[d], ny = y + dy[d];
      if (in_grid(nx, ny, H, W) && S[nx][ny] == '#') c++;
    }
    return c;
  }
  bool isPrime(int x){
    int i;
    if(x < 2)return 0;
    else if(x == 2) return 1;
    if(x%2 == 0) return 0;
    for(i = 3; i*i <= x; i += 2) if(x%i == 0) return 0;
    return 1;
  }
  template<typename T>
  void uniq(vector<T>& v) {
      sort(v.begin(), v.end());
      v.erase(unique(v.begin(), v.end()), v.end());
  }
  template<typename S, typename F>
  struct SaikyouLazySegmentTree {
    using Op = function<S(S, S)>;
    using E = function<S()>;
    using Mapping = function<S(F, S)>;
    using Composition = function<F(F, F)>;
    using Id = function<F()>;

    int n;
    vector<S> d;
    vector<F> lz;
    Op op;              // データ同士の合成 (max, sumなど)
    E e;                // データの単位元
    Mapping mapping;    // 遅延をデータに反映
    Composition composition; // 遅延同士の合成
    Id id;              // 遅延の単位元

    SaikyouLazySegmentTree(int _n, Op _op, E _e, Mapping _mapping, Composition _composition, Id _id)
      : op(_op), e(_e), mapping(_mapping), composition(_composition), id(_id) {
      n = 1;
      while (n < _n) n *= 2;
      d.assign(2 * n, e());
      lz.assign(2 * n, id());
    }

    // 初期化 (配列で構築)
    void build(const vector<S>& v) {
      for (int i = 0; i < (int)v.size(); i++) d[n + i] = v[i];
      for (int i = n - 1; i >= 1; i--) d[i] = op(d[2 * i], d[2 * i + 1]);
    }

    // 遅延評価の伝播
    void push(int k) {
      if (lz[k] == id()) return;
      int l = 2 * k, r = 2 * k + 1;
      d[l] = mapping(lz[k], d[l]);
      lz[l] = composition(lz[k], lz[l]);
      d[r] = mapping(lz[k], d[r]);
      lz[r] = composition(lz[k], lz[r]);
      lz[k] = id();
    }

    // 1点更新 (あまり使わないが念のため)
    void set(int p, S x) {
      p += n;
      for (int i = n; i >= 1; i >>= 1) push(p >> 1); // 必要なら遅延解消
      d[p] = x;
      for (int i = 1; i <= n; i <<= 1) {
        int k = p >> 1;
        d[k] = op(d[2 * k], d[2 * k + 1]);
      }
    }

    // 区間更新 [l, r) に f を適用
    void update(int l, int r, F f, int k, int a, int b) {
      if (l <= a && b <= r) {
        d[k] = mapping(f, d[k]);
        lz[k] = composition(f, lz[k]);
      } else {
        push(k);
        int mid = (a + b) / 2;
        if (l < mid) update(l, r, f, 2 * k, a, mid);
        if (r > mid) update(l, r, f, 2 * k + 1, mid, b);
        d[k] = op(d[2 * k], d[2 * k + 1]);
      }
    }
    void update(int l, int r, F f) { update(l, r, f, 1, 0, n); }

    // 区間取得 [l, r)
    S query(int l, int r, int k, int a, int b) {
      if (b <= l || r <= a) return e();
      if (l <= a && b <= r) return d[k];
      push(k);
      int mid = (a + b) / 2;
      return op(query(l, r, 2 * k, a, mid), query(l, r, 2 * k + 1, mid, b));
    }
    S query(int l, int r) { return query(l, r, 1, 0, n); }
  };
  template<typename T> int lis(vector<T>& A) {
    int N = A.size();
    vector<int> dp(N);
    vector<ll> L(N + 2, 1e18);
    dp[0] = 1; L[0] = 0; L[1] = A[0];
    int ans = 1;
    rep(i, N) {
      if (i == 0) continue;
      dp[i] = lower_bound(all(L), A[i]) - L.begin();
      L[dp[i]] = A[i];
      ans = max(dp[i], ans);
    }
    return ans;
  }
}
namespace imot {

  // --- 1D prefix sum setup ---
  vector<ll> setup_1d(const vector<ll>& A) {
    int n = A.size();
    vector<ll> ps(n + 1, 0);
    rep(i, n) ps[i + 1] = ps[i] + A[i];
    return ps;
  }

  // --- 1D range sum query [l, r) ---
  ll c1(const vector<ll>& ps, int l, int r) {
    return ps[r] - ps[l];
  }


  // --- 2D prefix sum setup ---
  vector<vector<ll>> setup_2d(const vector<vector<ll>>& A) {
    int h = A.size();
    int w = A[0].size();

    vector<vector<ll>> ps(h + 1, vector<ll>(w + 1, 0));

    rep(i, h) {
      rep(j, w) {
        ps[i + 1][j + 1] =
            ps[i + 1][j] + ps[i][j + 1] - ps[i][j] + A[i][j];
      }
    }

    return ps;
  }

  // --- 2D range sum query [(u,l), (d,r)) ---
  ll c2(const vector<vector<ll>>& ps, int u, int l, int d, int r) {
    return ps[d][r] - ps[u][r] - ps[d][l] + ps[u][l];
  }

}
namespace graph {
  vector<ll> dijkstra(WGraph& G, int start) {
    int n = G.size();
    vector<ll> dist(n, 1e18);
    dist[start] = 0;
    priority_queue<p2l, vector<p2l>, greater<p2l>> pq;
    pq.push({0,start});
    while (!pq.empty()) {
      auto [d,v] = pq.top();
      pq.pop();

      if (d > dist[v]) continue;
      for (auto [nv, a] : G[v]) {
        if (dist[nv] > dist[v] + a) {
          dist[nv] = dist[v] + a;
          pq.push({dist[nv], nv});
        }
      }
    }
    return dist;
  }
  vector<Graph> subgraphs(Graph &G) {
    int n = G.size();
    vector<bool> visited(n, false);
    vector<Graph> result;
    
    rep(i, n) {
      if (visited[i]) continue;
      
      vector<int> component;
      stack<int> q;
      q.push(i);
      visited[i] = true;
      
      while (!q.empty()) {
        int u = q.top();
        q.pop();
        component.push_back(u);
        
        for (int v : G[u]) {
          if (!visited[v]) {
            visited[v] = true;
            q.push(v);
          }
        }
      }
      
      Graph subgraph(component.size());
      unordered_map<int, int> idx_map;
      rep(j, component.size()) idx_map[component[j]] = j;
      
      rep(j, component.size()) {
        int u = component[j];
        for (int v : G[u]) {
          if (idx_map.count(v)) {
            subgraph[j].push_back(idx_map[v]);
          }
        }
      }
      
      result.push_back(subgraph);
    }
    
    return result;
  }
}

void remove(string& A, string& C) {
  int phase = 0; // 突入なし, (ゾーン, xゾーン, )ゾーン
  int lcnt = 0;
  int rcnt = 0;
  int xcnt = 0;
  int N = A.size();
#define reset phase = 0; lcnt = 0; rcnt = 0; xcnt = 0;
  rep(i, N) {
    if (phase == 0) {
      if (A[i] == '(') { phase = 1; i--; } // (があったならphase1に
      else C += A[i]; // そうでなければそのまま
    } else if (phase == 1) {
      if (A[i] == '(') { lcnt++; } // (があったなら(は増加
      else if (A[i] == 'x') { phase = 2; i--; } // xならphase2へ突入
      else { rep(_, lcnt) C += "("; i--; reset } // そうでないならそもそも閉じようがないので終わり
    } else if (phase == 2) {
      if (A[i] == 'x') {
        xcnt++;
        if (xcnt == 3) { rep(_, lcnt) C += "("; rep(_, xcnt) i--; reset } // オーバー済みなら
      } else if (A[i] == ')') {
        if (xcnt != 2) { rep(_, lcnt) C += "("; rep(_, xcnt) C += "x"; i--; reset  } // not reach
        else { phase = 3; i--; }
      } else {
        rep(_, lcnt) C += "("; rep(_, xcnt) C += "x"; reset // もはや誰だよお前失せろっていう場合
        i--; // 本来はphase1に戻るので
      }
    } else if (phase == 3) { 
      if (A[i] == ')') { // )なら
        rcnt++;
        if (lcnt == rcnt) { // エンドアップ 
          rep(_, xcnt) C += "x";
          reset
        }
      } 
      else { // 強制エンドアップ
        // 一応この条件式的にはl > rが保証されてる
        // よってmin(l, r) = r
        rep(_, lcnt - rcnt) C += "(";
        rep(_, xcnt) C += "x";
        i--;
        reset
      }
    }
    BREAKPOINT;
  }
  // エンドアップ未終了 (Ex.   ((xx), (xx)), (xx() など  )
  if (phase != 0) {
    int it = min(lcnt, rcnt);
    rep(_, lcnt - rcnt) C += "(";
    rep(_, xcnt) C += "x";
    reset
  }
}

__int128_t ceildiv(__int128_t a, __int128_t b) {
  return (a + b - 1) / b;
}
#define dein(a, b) a b; cin >> b;

// ---------------------- END MY LIBRARY ----------------------
