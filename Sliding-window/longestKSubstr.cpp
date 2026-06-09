class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int> freq;
        int l=0,h=0,res=-1;
        int n=s.length();
        while(h<n){
            freq[s[h]]++;
            while(freq.size()>k){
                freq[s[l]]--;
                if(freq[s[l]]==0){
                    freq.erase(s[l]);
                }l++;
            }
            if(freq.size()==k){
                res=max(res,h-l+1);
            }h++;
        }return res;
    }
};