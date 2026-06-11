class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // vector<int> dict(256, -1);
        // int maxLen = 0, start = -1;
        // for (int i = 0; i != s.length(); i++) {
        //     if (dict[s[i]] > start)
        //         start = dict[s[i]];
        //     dict[s[i]] = i;
        //     maxLen = max(maxLen, i - start);
        // }
        // return maxLen;
    //      int maxLength = 0;
    // int n = s.length();
    // for (int i = 0; i < n; i++) {
    //     unordered_set<char> seen;
    //     for (int j = i; j < n; j++) {
    //         if (seen.find(s[j]) != seen.end()) {
    //             break;
    //         }
    //         seen.insert(s[j]);
    //         maxLength = max(maxLength, j - i + 1);
    //     }
    // }
    // return maxLength;

    // unordered_map<char, int> lastIndex;
    // int maxLength = 0;
    // int left = 0;

    // for (int right = 0; right < s.length(); right++) {
    //     if (lastIndex.find(s[right]) != lastIndex.end() && lastIndex[s[right]] >= left) {
    //         left = lastIndex[s[right]] + 1; // Move left pointer to avoid duplicates
    //     }
    //     lastIndex[s[right]] = right;
    //     maxLength = max(maxLength, right - left + 1);
    // }

    // return maxLength;
    int n=s.length();
int l=0,h=0,res=0;
unordered_map<char,int> freq;
while(h<n){
    freq[s[h]]++;
    while(freq[s[h]]>1){
        freq[s[l]]--;
        l++;
    }
    res=max(res,h-l+1);
    h++;
}
return res;

    }
};