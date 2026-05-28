class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        sort(arr.begin(),sort.end());
        int count=0;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int sum=arr[i]+arr[l]+arr[r];
                if(sum<target){
                    count+=(r-l);
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return count;
        
    }
};