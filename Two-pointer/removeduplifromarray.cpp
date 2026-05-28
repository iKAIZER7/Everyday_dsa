class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }   
        }
        return i+1;


        //  int i=0;
        // int n=nums.size();
        // for(int j=1;j<n;j++){
        //     if(nums[j]!=nums[i]){
        //         nums[i+1]=nums[j];
        //         i++;
        //     }
        // }return i+1;
        // // if (n==0 || n==1){  
        // //     return n;  
        // // }  
        // // int *temp= new int[n];  
        // // int j = 0;  
        // // for (int i=0; i<n-1; i++){  
        // //     if (arr[i] != arr[i+1]){  
        // //         temp[j++] = arr[i];  
        // //     }  
        // //  }  
        // // temp[j++] = arr[n-1];     
        // // // Changing original array  
        // // for (int i=0; i<j; i++){  
        // //     arr[i] = temp[i];  
        // // }  
        // // return j;  
        
    }
};