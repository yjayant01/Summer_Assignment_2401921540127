class Solution {
public:
    bool checkPalindrome(string &s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    bool isPalindrome(string s) {
        string result;

        for (char ch : s) {
            if (isalnum(ch)) {
                result += tolower(ch);
            }
        }

        return checkPalindrome(result);
    }
};