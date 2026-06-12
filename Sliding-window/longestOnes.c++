class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int i = 0, j;
        // for (j = 0; j < nums.size(); ++j) {
        //     if (nums[j] == 0) K--;
        //     if (K < 0 && nums[i++] == 0) K++;
        // }
        // return j - i;
        int l=0,h=0,zerocount=0,ans=0;
int n=nums.size();
while(h<n){
    if(nums[h]==0){
        zerocount++;
    }
    while(zerocount>k){
        if(nums[l]==0){
            zerocount--;
        }
        l++;
    }
    ans=max(ans,h-l+1);
    h++;
}
return ans;

        
        
    }
};