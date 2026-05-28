int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int bestsum=nums[0]+nums[1]+nums[2];
        int l,r;
        for(int i=0;i<n-2;i++){
                l=i+1;
                r=n-1;
                while(l<r){
                    int sum=nums[i]+nums[l]+nums[r];
                    if(abs(sum-target)<abs(bestsum-target)){
                        bestsum=sum;
                    }
                    if(sum<target) l++;
                    else if (sum>target) r--;
                    else return sum;
                }
        }
        return bestsum;
    }