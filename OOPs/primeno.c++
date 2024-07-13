#include<bits/stdc++.h>
using namespace std;

string longestUniqueSubstring(string s) {
    int n = s.length();
    // Base Case
    if (n < 3) return "-1";

    unordered_set<char> charSet;
    int left = 0, right = 0;
    int maxLength = 0, startIdx = -1;

    while (right < n) {
        if (charSet.find(s[right]) == charSet.end()) {
            charSet.insert(s[right]);
            right++;
            
            if (right - left >= 3 && right - left > maxLength) {
                maxLength = right - left;
                startIdx = left;
            }
        } else {
            charSet.erase(s[left]);
            left++;
        }
    }

    // If found a valid substring, nhi to return "-1"
    if (maxLength >= 3) {
        return s.substr(startIdx, maxLength);
    } else {
        return "-1";
    }
}

int main() {
    string input = "A@bcd1abx";
    string result = longestUniqueSubstring(input);
    cout << result << endl;
    return 0;
}