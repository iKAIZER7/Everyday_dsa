class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
int l=0,h=k-1;
int sum=0;
for(int i=l;i<=h;i++){
    sum=sum+arr[i];
}
int result=sum;
while(h<n){
    result=max(result,sum);
    l++;h++;
    sum=sum-arr[l-1];
    if(h==n){
        break;
    }
    sum=sum+arr[h];
}
return result;
    }
};