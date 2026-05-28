class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        // for(int i=0;i<n;i++){
        //     int s=nums[i]*nums[i];
        //     a.push_back(s);
        // }
        // sort(a.begin(),a.end());
        // return a;
        int l=0,r=n-1,k=n-1;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                result[k]=nums[l]*nums[l];
                l++;
            }
            else {
                result[k]=nums[r]*nums[r];
                r--;
            }k--;
        }
        return result;



        
    }
};