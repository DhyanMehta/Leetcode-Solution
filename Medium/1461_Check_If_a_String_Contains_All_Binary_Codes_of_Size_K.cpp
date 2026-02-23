class Solution {
public:
    bool hasAllCodes(string s, int k) {
    int n = s.size();
    if (k > n) return false;
    int total = 1 << k;
    vector<bool> seen(total, false);
    int count = 0;

    int window = 0;
    int mask = total - 1;

    for (int i = 0; i < n; i++) {
        window = ((window << 1) & mask) | (s[i] - '0');
        if (i >= k - 1) {
            if (!seen[window]) {
                seen[window] = true;
                count++;
                if (count == total) return true;
            }
        }
    }

    return false;
    }
};