
#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    string solve(int n, int t, string s) {
        queue<string> q;
        q.push(s);

        for (int i = 0; i < t; i++) {
            string cur = q.front();
            q.pop();

            string next = cur;

            for (int j = 0; j < n - 1; j++) {
                if (cur[j] == 'B' && cur[j + 1] == 'G') {
                    swap(next[j], next[j + 1]);
                    j++;
                }
            }

            q.push(next);
        }

        return q.front();
    }
};

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    Solution obj;
    cout << obj.solve(n, t, s) << endl;

    return 0;
}
