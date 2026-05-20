#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int i = 1; i <= n; i++) {
        int ops = 0;

        for(int j = 0; j < n; ) {
            if(s[j] == '1') {
                ops++;
                j += i;
            } else {
                j++;
            }
        }

        if(ops <= k) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
