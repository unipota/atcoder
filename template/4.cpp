#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, init, n) for(int i = init; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main()
{
    string S;
    cin >> S;
    int cnt = 0;
    rep(i, 3) if(S[i] == 'o') cnt++;

    cout << 700 + 100 * cnt << endl;
    return 0;
}
