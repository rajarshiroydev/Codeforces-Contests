#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int moves = 0;

        for (int i = 1; i < n; i++) {
            if (s[i] == 'u') {
                moves++;
                s[i] = 'd';  // Flip the current card
                s[i - 1] = (s[i - 1] == 'u') ? 'd' : 'u';  // Flip the left card
            }
        }

        // Check if the last card is face up
        if (s[n - 1] == 'u') {
            cout << -1 << endl;  // It's impossible to turn all cards face down
        } else {
            cout << moves << endl;
        }
    }

    return 0;
}
