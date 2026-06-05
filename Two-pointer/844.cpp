class Solution {
    int findNextValidIndex(string &s, int i) {
        int skip = 0;
        while (i >= 0) {
            if (s[i] == '#') {
                skip++;
                i--;
            }
            else if (skip > 0) {
                skip--;
                i--;
            }
            else {
                return i;
            }
        }

        return -1;
    }
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size()-1;
        int j=t.size()-1;

        while(i>=0 || j>=0){
            i=findNextValidIndex(s,i);
            j=findNextValidIndex(t,j);

            if((i==-1) != (j==-1)){
                return false;
            }
            else if(i==-1 && j==-1){
                return true;
            }
            if(s[i]!=t[j]){
                return false;
            }
            i--;
            j--;
        }
        return true;
        
    }
};