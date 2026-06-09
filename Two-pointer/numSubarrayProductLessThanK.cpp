class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if (k <= 1) return 0; // As k is strictly greater than 0
        
        int count = 0;
        int product = 1;
        int l= 0,h=0;
        int n=nums.size();
        
        // for (int right = 0; right < nums.size(); ++right) {
        //     product *= nums[right];
        //     while (product >= k) {
        //         product /= nums[left++];
        //     }
        //     count += right - left + 1;
        // }
        while(h<n){
            product*=nums[h];
            while(product>=k){
                product/=nums[l++];
                
            }
            count+=h-l+1;
            h++;
        }
        
        return count;
    }
};