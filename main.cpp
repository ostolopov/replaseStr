#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    int func (string& s) {
        int res = 0;
        string sc;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i + 1; j < s.size(); ++j) {
                if (s[i] == s[s.size() - j - 1]) {
                    res++;
                }
            }
        }

        return res;
    }
};

int main() {
    Solution solv;
    int t;
    cin >> t;
    vector <string> strs(t, nullptr);
    for (auto s : strs)
        cin >> s;
    for (auto s : strs)
        cout << solv.func(s) << endl;
    return 0;
}
