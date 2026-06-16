class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.length();
        if (k > s2.length()) {
    return false;
}
vector<int> need(26,0);
vector<int> window(26,0);
for(char ch : s1){
    need[ch-'a']++;
}
for(int i=0;i<k;i++){
    window[s2[i]-'a']++;
}
if(need==window){
    return true;
}
for(int right=k;right<s2.length();right++){
    int incoming=s2[right];
    int outgoing=s2[right-k];
    window[incoming-'a']++;
    window[outgoing-'a']--;
    if(need==window){
        return true;
    }
}
return false;

    }
};