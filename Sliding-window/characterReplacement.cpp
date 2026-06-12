class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
int l=0,h=0,ans=0,maxfreq=0,n=s.length();
while(h<n){
    freq[s[h]]++;
    maxfreq=max(maxfreq,freq[s[h]]);
    int windowsize=h-l+1;
    while(windowsize-maxfreq>k){
        freq[s[l]]--;
        l++;
        windowsize=h-l+1;
    }
    ans=max(ans,windowsize);
    h++;
}
return ans;
    }
};