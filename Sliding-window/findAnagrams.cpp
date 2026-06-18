class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();
if (p.length() > s.length())
    return {};
vector<int> need(26,0);
vector<int> window(26,0);
vector<int> ans;
for(char ch:p){
    need[ch-'a']++;
}
for(int i=0;i<k;i++){
    window[s[i]-'a']++;
}
if(need==window){
    ans.push_back(0);
}
for(int right=k;right<s.length();right++){
    char incoming=s[right];
    char outgoing=s[right-k];
    
    window[incoming-'a']++;
    window[outgoing-'a']--;
    if(need==window){
        ans.push_back(right-k+1);
    }
}
return ans;
    }
};