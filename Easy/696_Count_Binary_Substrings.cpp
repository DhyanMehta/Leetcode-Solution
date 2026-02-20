class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroupLength = 0;
        int currGroupLength = 1;
        int totalCount = 0;

        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) {
                currGroupLength++;
            } else {
                totalCount +=min(prevGroupLength, currGroupLength);
                prevGroupLength = currGroupLength;
                currGroupLength = 1;
            }
        }
        totalCount += min(prevGroupLength, currGroupLength);
        
        return totalCount;
    }
};