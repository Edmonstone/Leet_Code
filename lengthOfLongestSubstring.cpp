class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int maxLength = 0;
        int left = 0;
        int right = 0;

        while (right < s.length()) {
            if (seen.count(s[right]) == 0) {
                seen.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            } else {
                seen.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};
