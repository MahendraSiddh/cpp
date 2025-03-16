string newString(string s) {
    string ans = "#";
    for (int i = 0; i < s.length(); i++) {
        ans += s[i];
        ans += "#";
    }
    return ans;
}

int longestPalindrome(string s) {
    s = newString(s);
    vector<int> p(s.length() + 1, 0);
    int n = s.length();
    int l = 0;
    int r = -1;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int k;
        if (i > r) {
            k = 0;
        } else {
            int j = l + r - i;
            k = min(p[j], r - i);
        }
        while ((i - k) > 0 && (i + k) < n && s[i - k] == s[i + k]) {
            ++k;
        }
        if (s[i - k] != s[i + k]) {
            --k;
        }
        p[i] = k;
        if ((i + k) > r) {
            l = i - k;
            r = i + k;
        }
        ans = max(ans, p[i]);
    }
    return ans;
}