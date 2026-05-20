#include<bits/stdc++.h>
using namespace std;

string solve (int n, vector<int> arr) {

    sort(arr.begin(), arr.end(), greater<int>());

    int alex = 0, bob = 0;
    bool turn = true;

    for(int i = 0; i < n; i++) {
        int val = arr[i];

        if(turn) alex += val;
        else bob += val;

        turn = !turn;

        if(i + 1 < n && arr[i] == arr[i + 1]) {
            if(turn) alex += val;
            else bob += val;
            turn = !turn;
            i++;
        }

        while(i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    }

    if(alex > bob) return "Alex";
    else return "Bob";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i_arr = 0; i_arr < n; i_arr++)
        {
        	cin >> arr[i_arr];
        }

        string out_;
        out_ = solve(n, arr);
        cout << out_;
        cout << "\n";
    }
}
