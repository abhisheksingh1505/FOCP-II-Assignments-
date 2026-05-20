
#include <iostream>
using namespace std;

const int MAXN = 10000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    static int cnt[MAXN + 1] = {0};

    for(int i = 2; i <= MAXN; i++) {
        if(cnt[i] == 0) {
            for(int j = i; j <= MAXN; j += i) {
                cnt[j]++;
            }
        }
    }

    int T;
    cin >> T;

    while(T--) {
        int n;
        cin >> n;

        int k = cnt[n];

        int ans = 1;
        for(int i = 0; i < k; i++) {
            ans *= 2;
        }

        cout << ans << '\n';
    }

    return 0;
}
