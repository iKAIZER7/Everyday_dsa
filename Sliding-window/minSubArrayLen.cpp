class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int n=nums.size();
        // int start=0,currentsum=0,minlength=INT_MAX;
        // for(int end=0;end<n.size();end++){
        //     currentsum+=nums[end];
        //     while(currentsum>=target){
        //         minlength=min(minlength,end-start+1);
        //         currentsum-=nums[start];
        //         start++;
        //     }
        // }
        // return (minlength==INT_MAX)?0 : minlength;
        int n=nums.size();
int l=0,h=0,result=INT_MAX;
int sum=0;
while(h<n){
    sum=sum+nums[h];
    while(sum>=target){
        int len=h-l+1;
        result=min(result,len);
        sum=sum-nums[l];
        l++;
    }h++;
}
return (result==INT_MAX)?0 : result;
    }
};